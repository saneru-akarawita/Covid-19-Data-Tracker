// Author: Saneru Akarawita

#include <bits/stdc++.h>
using namespace std;

struct details
{
    string day;
    string month;
    string yr;
    string country;
    string province;
    string region;
    string agegrp;
    string sex;
    int cases;
};

details datarow[551];

void filehandling()
{
    std::ifstream file("COVID19BE_CASES_TESTDATA.csv");
    std::string str;
    int k = 0;
    int t = 550;

    while (t--)
    {

        std::getline(file, str);
        string v[9];
        int m = 0;
        stringstream ss(str);

        while (ss.good())
        {
            string substr;
            getline(ss, substr, ',');
            v[m] = substr;
            m++;
        }

        datarow[k].day = v[0];
        datarow[k].month = v[1];
        datarow[k].yr = v[2];
        datarow[k].country = v[3];
        datarow[k].province = v[4];
        datarow[k].region = v[5];
        datarow[k].agegrp = v[6];
        datarow[k].sex = v[7];
        istringstream((v[8])) >> datarow[k].cases;
        k++;
    }

    // for (int i = 1; i <= 550; i++)
    // {
    //     cout << datarow[i].day << " ";
    //     cout << datarow[i].month << " ";
    //     cout << datarow[i].yr << " ";
    //     cout << datarow[i].country << " ";
    //     cout << datarow[i].province << " ";
    //     cout << datarow[i].region << " ";
    //     cout << datarow[i].agegrp << " ";
    //     cout << datarow[i].sex << " ";
    //     cout << datarow[i].cases << "\n";
    // }
}

int mainmenu()
{

    int mainchoice;

    cout << "\n\n\tWelcome to the COVID-19 Data Analysis Program.\n";
    cout << "\tMake a selection from the menu below regarding the information you would like to see.\n\n";

    cout << "\t\t> 1. Statistics of entire nation.\n";
    cout << "\t\t> 2. Statistics of regions.\n";
    cout << "\t\t> 3. Exit the program.\n\n\n";

    cout << "Enter Your Choice :";

    cin >> mainchoice;

    return mainchoice;
}

void solve(int mainchoice, int subchoice)
{
    int totcase = 0, mcase = 0, fcase = 0, z_9grp = 0, o_9grp = 0, tw_9grp = 0, th_9grp = 0,
        fo_9grp = 0, fi_9grp = 0, si_9grp = 0, se_9grp = 0, e_9grp = 0, ni_plusgrp = 0;

    int flanderArray[13] = {0}, brusselsArray[13] = {0}, walloniaArray[13] = {0};

    for (int k = 1; k <= 550; k++)
    {
        totcase = totcase + datarow[k].cases;

        if (datarow[k].region == "Brussels")
        {
            brusselsArray[0] = brusselsArray[0] + datarow[k].cases;
        }
        if (datarow[k].region == "Flanders")
        {
            flanderArray[0] = flanderArray[0] + datarow[k].cases;
        }
        if (datarow[k].region == "Wallonia")
        {
            walloniaArray[0] = walloniaArray[0] + datarow[k].cases;
        }
        if (datarow[k].sex == "M")
        {
            mcase = mcase + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[1] = brusselsArray[1] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[1] = flanderArray[1] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[1] = walloniaArray[1] + datarow[k].cases;
            }
        }
        if (datarow[k].sex == "F")
        {
            fcase = fcase + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[2] = brusselsArray[2] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[2] = flanderArray[2] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[2] = walloniaArray[2] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "0-9")
        {
            z_9grp = z_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[3] = brusselsArray[3] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[3] = flanderArray[3] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[3] = walloniaArray[3] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "10-19")
        {
            o_9grp = o_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[4] = brusselsArray[4] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[4] = flanderArray[4] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[4] = walloniaArray[4] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "20-29")
        {
            tw_9grp = tw_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[5] = brusselsArray[5] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[5] = flanderArray[5] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[5] = walloniaArray[5] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "30-39")
        {
            th_9grp = th_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[6] = brusselsArray[6] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[6] = flanderArray[6] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[6] = walloniaArray[6] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "40-49")
        {
            fo_9grp = fo_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[7] = brusselsArray[7] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[7] = flanderArray[7] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[7] = walloniaArray[7] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "50-59")
        {
            fi_9grp = fi_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[8] = brusselsArray[8] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[8] = flanderArray[8] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[8] = walloniaArray[8] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "60-69")
        {
            si_9grp = si_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[9] = brusselsArray[9] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[9] = flanderArray[9] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[9] = walloniaArray[9] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "70-79")
        {
            se_9grp = se_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[10] = brusselsArray[10] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[10] = flanderArray[10] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[10] = walloniaArray[10] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "80-89")
        {
            e_9grp = e_9grp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[11] = brusselsArray[11] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[11] = flanderArray[11] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[11] = walloniaArray[11] + datarow[k].cases;
            }
        }
        if (datarow[k].agegrp == "90+")
        {
            ni_plusgrp = ni_plusgrp + datarow[k].cases;

            if (datarow[k].region == "Brussels")
            {
                brusselsArray[12] = brusselsArray[12] + datarow[k].cases;
            }
            if (datarow[k].region == "Flanders")
            {
                flanderArray[12] = flanderArray[12] + datarow[k].cases;
            }
            if (datarow[k].region == "Wallonia")
            {
                walloniaArray[12] = walloniaArray[12] + datarow[k].cases;
            }
        }
    }

    if (mainchoice == 1)
    {

        switch (subchoice)
        {
        case 1:
            cout << "The total Number of Cases : " << totcase << "\n";
            break;
        case 2:
            cout << "The total Number of Male Cases : " << mcase << "\n";
            break;
        case 3:
            cout << "The total Number of Female Cases : " << fcase << "\n";
            break;
        case 4:
            cout << "The total Number of 0-9 age group Cases : " << z_9grp << "\n";
            break;
        case 5:
            cout << "The total Number of 10-19 age group Cases : " << o_9grp << "\n";
            break;
        case 6:
            cout << "The total Number of 20-29 age group Cases : " << tw_9grp << "\n";
            break;
        case 7:
            cout << "The total Number of 30-39 age group Cases : " << th_9grp << "\n";
            break;
        case 8:
            cout << "The total Number of 40-49 age group Cases : " << fo_9grp << "\n";
            break;
        case 9:
            cout << "The total Number of 50-59 age group Cases : " << fi_9grp << "\n";
            break;
        case 10:
            cout << "The total Number of 60-69 age group Cases : " << si_9grp << "\n";
            break;
        case 11:
            cout << "The total Number of 70-79 age group Cases : " << se_9grp << "\n";
            break;
        case 12:
            cout << "The total Number of 80-89 age group Cases : " << e_9grp << "\n";
            break;
        case 13:
            cout << "The total Number of 90+ age group Cases : " << ni_plusgrp << "\n";
            break;
        default:
            cout << "Invalid SubChoice\n";
            break;
        }
    }

    else if (mainchoice == 2)
    {
        switch (subchoice)
        {

        case 1:
            cout << "Total number COVID-19 cases for Flanders is: " << flanderArray[0] << "\n";
            cout << "Total number COVID-19 male cases for Flanders is:  " << flanderArray[1] << "\n";
            cout << "Total number COVID-19 female cases for Flanders is: " << flanderArray[2] << "\n";
            cout << "Total number COVID-19 cases in 0-9 age group for Flanders is:  " << flanderArray[3] << "\n";
            cout << "Total number COVID-19 cases in 10-19 age group for Flanders is:  " << flanderArray[4] << "\n";
            cout << "Total number COVID-19 cases in 20-29 age group for Flanders is:  " << flanderArray[5] << "\n";
            cout << "Total number COVID-19 cases in 30-39 age group for Flanders is:  " << flanderArray[6] << "\n";
            cout << "Total number COVID-19 cases in 40-49 age group for Flanders is:  " << flanderArray[7] << "\n";
            cout << "Total number COVID-19 cases in 50-59 age group for Flanders is:  " << flanderArray[8] << "\n";
            cout << "Total number COVID-19 cases in 60-69 age group for Flanders is:  " << flanderArray[9] << "\n";
            cout << "Total number COVID-19 cases in 70-79 age group for Flanders is:  " << flanderArray[10] << "\n";
            cout << "Total number COVID-19 cases in 80-89 age group for Flanders is:  " << flanderArray[11] << "\n";
            cout << "Total number COVID-19 cases in 90+ age group for Flanders is:  " << flanderArray[12] << "\n";
            break;
        case 2:
            cout << "Total number COVID-19 cases for Brussels is: " << brusselsArray[0] << "\n";
            cout << "Total number COVID-19 male cases for Brussels is:  " << brusselsArray[1] << "\n";
            cout << "Total number COVID-19 female cases for Brussels is: " << brusselsArray[2] << "\n";
            cout << "Total number COVID-19 cases in 0-9 age group for Brussels is:  " << brusselsArray[3] << "\n";
            cout << "Total number COVID-19 cases in 10-19 age group for Brussels is:  " << brusselsArray[4] << "\n";
            cout << "Total number COVID-19 cases in 20-29 age group for Brussels is:  " << brusselsArray[5] << "\n";
            cout << "Total number COVID-19 cases in 30-39 age group for Brussels is:  " << brusselsArray[6] << "\n";
            cout << "Total number COVID-19 cases in 40-49 age group for Brussels is:  " << brusselsArray[7] << "\n";
            cout << "Total number COVID-19 cases in 50-59 age group for Brussels is:  " << brusselsArray[8] << "\n";
            cout << "Total number COVID-19 cases in 60-69 age group for Brussels is:  " << brusselsArray[9] << "\n";
            cout << "Total number COVID-19 cases in 70-79 age group for Brussels is:  " << brusselsArray[10] << "\n";
            cout << "Total number COVID-19 cases in 80-89 age group for Brussels is:  " << brusselsArray[11] << "\n";
            cout << "Total number COVID-19 cases in 90+ age group for Brussels is:  " << brusselsArray[12] << "\n";
            break;
        case 3:
            cout << "Total number COVID-19 cases for Wallonia is: " << walloniaArray[0] << "\n";
            cout << "Total number COVID-19 male cases for Wallonia is:  " << walloniaArray[1] << "\n";
            cout << "Total number COVID-19 female cases for Wallonia is: " << walloniaArray[2] << "\n";
            cout << "Total number COVID-19 cases in 0-9 age group for Wallonia is:  " << walloniaArray[3] << "\n";
            cout << "Total number COVID-19 cases in 10-19 age group for Wallonia is:  " << walloniaArray[4] << "\n";
            cout << "Total number COVID-19 cases in 20-29 age group for Wallonia is:  " << walloniaArray[5] << "\n";
            cout << "Total number COVID-19 cases in 30-39 age group for Wallonia is:  " << walloniaArray[6] << "\n";
            cout << "Total number COVID-19 cases in 40-49 age group for Wallonia is:  " << walloniaArray[7] << "\n";
            cout << "Total number COVID-19 cases in 50-59 age group for Wallonia is:  " << walloniaArray[8] << "\n";
            cout << "Total number COVID-19 cases in 60-69 age group for Wallonia is:  " << walloniaArray[9] << "\n";
            cout << "Total number COVID-19 cases in 70-79 age group for Wallonia is:  " << walloniaArray[10] << "\n";
            cout << "Total number COVID-19 cases in 80-89 age group for Wallonia is:  " << walloniaArray[11] << "\n";
            cout << "Total number COVID-19 cases in 90+ age group for Wallonia is:  " << walloniaArray[12] << "\n";
            break;
        default:
            cout << "Invalid SubChoice\n";
            break;
        }
    }
}

int statnaion()
{

    int snchoice;

    cout << "\n\nStatistics for the entire nation: select from the menu below:\n\n";
    cout << "  > 1.\tDisplay the total number of COVID-19 cases.\n";
    cout << "  > 2.\tDisplay the number of COVID-19 cases: Males.\n";
    cout << "  > 3.\tDisplay the number of COVID-19 cases: Females.\n";
    cout << "  > 4.\tDisplay the number of COVID-19 cases: 0-9 age group.\n";
    cout << "  > 5.\tDisplay the number of COVID-19 cases: 10-19 age group.\n";
    cout << "  > 6.\tDisplay the number of COVID-19 cases: 20-29 age group.\n";
    cout << "  > 7.\tDisplay the number of COVID-19 cases: 30-39 age group.\n";
    cout << "  > 8.\tDisplay the number of COVID-19 cases: 40-49 age group.\n";
    cout << "  > 9.\tDisplay the number of COVID-19 cases: 50-59 age group.\n";
    cout << "  > 10.\tDisplay the number of COVID-19 cases: 60-69 age group.\n";
    cout << "  > 11.\tDisplay the number of COVID-19 cases: 70-79 age group.\n";
    cout << "  > 12.\tDisplay the number of COVID-19 cases: 80-89 age group.\n";
    cout << "  > 13.\tDisplay the number of COVID-19 cases: 90+ age group.\n\n\n";

    cout << "Enter Your Choice :";

    cin >> snchoice;

    return snchoice;
}

int statregion()
{

    int srchoice;

    cout << "\n\nStatistics by Region: select from the menu below:\n";
    cout << "Which region would you like statistics for?\n\n";

    cout << "\t1. Flanders\n";
    cout << "\t2. Brussels\n";
    cout << "\t3. Wallonia\n\n";

    cout << "Enter Your Choice :";

    cin >> srchoice;

    return srchoice;
}

int main()
{
    int mainchoice, snchoice, srchoice;
    char charop;

    filehandling();

    while (true)
    {

        mainchoice = mainmenu();

        if (mainchoice == 1)
        {
            while (true)
            {
                snchoice = statnaion();
                if (snchoice >= 1 && snchoice <= 13)
                {
                    solve(mainchoice, snchoice);

                    cout << "\n\nWould you like to make another selection (Y or N)? :";
                    cin >> charop;

                    if (charop == 'N' || charop == 'n')
                    {
                        break;
                    }
                }
                else
                {
                    cout << "Invalid Input. Try again.\n";
                }
            }
        }
        else if (mainchoice == 2)
        {
            while (true)
            {
                srchoice = statregion();
                if (srchoice >= 1 && srchoice <= 3)
                {
                    solve(mainchoice, srchoice);

                    cout << "\n\nWould you like to make another selection (Y or N)? :";
                    cin >> charop;

                    if (charop == 'N' || charop == 'n')
                    {
                        break;
                    }
                }
                else
                {
                    cout << "Invalid Input. Try again.\n";
                }
            }
        }
        else if (mainchoice == 3)
        {
            exit(0);
        }
        else
        {
            cout << "Invalid Input. Please Try again\n ";
        }
    }

    return 0;
}