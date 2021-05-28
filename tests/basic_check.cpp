//
// Created by Karol on 28.05.2021.
//

#include <list>
#include "../src/zip.hpp"
#include <cassert>

bool isSuccess()
{
    {
        auto res_1 = tools::zip<std::list<int>, std::list<int>>(
                { 1, 2, 3, 4 }, { 4, 5, 6, 7 });
        std::list<std::list<int>> expected_1 =
        {
            {1, 4},
            {2, 5},
            {3, 6},
            {4, 7}
        };

        assert(res_1 == expected_1);
    }
    {
        auto res_2 = tools::zip<std::list<int>, std::list<int>>(
            { 1, 2 }, { 3, 4 });
        std::list<std::list<int>> expected_2 =
        {
            {1, 3},
            {2, 4}
        };

        assert(res_2 == expected_2);
    }

    return true;
}