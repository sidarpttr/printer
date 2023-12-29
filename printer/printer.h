#ifndef PRINTER_H
#define PRINTER_H

#include <iostream>
#include <string>
#include <array>
#include <vector>

class Letter{
private:

    std::array<std::string, 4> a = {
                        "╭━━╮",
                        "┃╭╮┃",
                        "┃╭╮┃",
                        "╰╯╰╯"};
    std::array<std::string, 4> b = {
                        "╭╮  ",
                        "┃╰━╮",
                        "┃╰╯┃",
                        "╰━━╯"};
    std::array<std::string, 4> c = {
                        "╭━━╮",
                        "┃╭━╯",
                        "┃╰━╮",
                        "╰━━╯"};
    std::array<std::string, 4> d = {
                        "  ╭╮",
                        "╭━╯┃",
                        "┃╰╯┃",
                        "╰━━╯"};
    std::array<std::string, 4> e = {
                        "╭━━╮",
                        "┃┃━┫",
                        "┃┃━┫",
                        "╰━━╯"};
    std::array<std::string, 4> f = {
                        " ╭━╮",
                        " ┃╭╯",
                        "╰╮╭╯",
                        " ╰╯ "};
    std::array<std::string, 4> g = {
                        "╭━━╮",
                        "┃╭╮┃",
                        "╰━╮┃",
                        "╰━━╯"};
    std::array<std::string, 4> h = {
                        "╭╮  ",
                        "┃╰━╮",
                        "┃╭╮┃",
                        "╰╯╰╯"};
    std::array<std::string, 4> i = {
                        "╭╮",
                        "╭╮",
                        "┃┃",
                        "╰╯"};
    std::array<std::string, 4> j = {
                        " ╭╮",
                        " ╭╮",
                        "╭╯┃",
                        "╰━╯"};
    std::array<std::string, 4> k = {
                        "╭╮╭╮",
                        "┃╰╯╯",
                        "┃╭╮╮",
                        "╰╯╰╯"};
    std::array<std::string, 4> l = {
                        "╭╮ ",
                        "┃┃ ",
                        "┃╰╮",
                        "╰━╯"};
    std::array<std::string, 4> m = {
                        "╭╮╭╮",
                        "┃╰╯┃",
                        "┃┃┃┃",
                        "╰┻┻╯"};
    std::array<std::string, 4> n = {
                        "╭╮  ",
                        "┃╭╮╮",
                        "┃┃┃┃",
                        "╰╯╰╯"};
    std::array<std::string, 4> o = {
                        "╭━━╮",
                        "┃╭╮┃",
                        "┃╰╯┃",
                        "╰━━╯"};
    std::array<std::string, 4> q = {
                        "╭━━╮",
                        "┃╭╮┃",
                        "╰━╮┃",
                        "  ╰╯"};
    std::array<std::string, 4> p = {
                        "╭━━╮",
                        "┃╭╮┃",
                        "┃╭━╯",
                        "╰╯  "};
    std::array<std::string, 4> r = {
                        "╭━╮",
                        "┃╭╯",
                        "┃┃ ",
                        "╰╯ "};
    std::array<std::string, 4> s = {
                        "╭━━╮",
                        "┃━━┫",
                        "┣━━┃",
                        "╰━━╯"};
    std::array<std::string, 4> t = {
                        " ╭╮ ",
                        "╭╯╰╮",
                        " ┃╰╮",
                        " ╰━╯"};
    std::array<std::string, 4> u = {
                        "╭╮╭╮",
                        "┃┃┃┃",
                        "┃╰╯┃",
                        "╰━━╯"};
    std::array<std::string, 4> v = {
                        "╭╮╭╮",
                        "┃╰╯┃",
                        "╰╮╭╯",
                        " ╰╯ "};
    std::array<std::string, 4> w = {
                        "╭╮╭╮╭╮",
                        "┃╰╯╰╯┃",
                        "╰╮╭╮╭╯",
                        " ╰╯╰╯ "};
    std::array<std::string, 4> x = {
                        "╭╮╭╮",
                        "╰╋╋╯",
                        "╭╋╋╮",
                        "╰╯╰╯"};
    std::array<std::string, 4> y = {
                        "╭╮ ╭╮",
                        "┃╰━╯┃",
                        "╰━╮╭╯",
                        "╰━━╯ "};
    std::array<std::string, 4> z = {
                        "╭━━━╮",
                        "┣━━┃┃",
                        "┃┃━━┫",
                        "╰━━━╯"};
    std::vector<std::array<std::string, 4>> alphabet = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
    
public:
    void print(std::string)const;
};

#include "printer.cpp"
#endif