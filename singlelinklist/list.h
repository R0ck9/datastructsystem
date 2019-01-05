/*************************************************************************
	> File Name: list.h
	> Author: liqian
	> Mail: 971728754@qq.com
	> Created Time: 2018年12月26日 星期三 20时54分39秒
 ************************************************************************/

#ifndef _LIST_H
#define _LIST_H

typedef int DataType;

/*singly link list struct*/
typedef struct SingLinklistNode
{
    int      m_nodeNum;    //node num
    DataType m_key;        //key value
    void *   m_date;       //all data
    struct SingLinklistNode *next; //point next node
}SingLinklistNode;

/*round singly link list struct*/

typedef struct LoopSingLinklistNode
{
    int      m_nodeNum;    //node num
    DataType m_key;        //key value
    void *   m_date;       //all data
    struct LoopSingLinklistNode *next; //point next node
}LoopSingLinklistNode;

/*double link list struct*/
typedef struct DoubleLinklistNode
{
    int      m_nodeNum;    //node num
    DataType m_key;        //key value
    void *   m_date;       //all data

    struct DoubleLinklistNode *prev; //point prev node
    struct DoubleLinklistNode *next; //point next node
}DoubleLinklistNode;

/*round double link list struct*/
typedef struct LoopDoubleLinklistNode
{
    int      m_nodeNum;    //node num
    DataType m_key;        //key value
    void *   m_date;       //all data

    struct LoopDoubleLinklistNode *prev; //point prev node
    struct LoopDoubleLinklistNode *next; //point next node
}LoopDoubleLinklistNode;

/*function */
void InitSingLinklistNode()



#endif
