// FUN_0100b5b4 @ 0100b5b4 size=884 calls_out=3 calls_in=1
// strings: %01%02%03%04%05%06%07%08%09%0A%0B%0C%0D%0E%0F%10%11%12%13%14%15%16%17%18%19%1A%1B%1C%1D%1E%1F%20%21%22%23%24%25%26%27%28%29%2A%2B%2C%2D%2E%2F%30%31%32%33%34%35%36%37%38%39%3A%3B%3C%3D%3E%3F%40%41%42%43%44%45%46%47%48%49%4A%4B%4C%4D%4E%4F%50%51%52%53%54%55%56%57%58%59%5A%5B%5C%5D%5E%5F%60%61%62%63%64%65%66%67%68%69%6A%6B%6C%6D%6E%6F%70%71%72%73%74%75%76%77%78%79%7A%7B%7C%7D%7E%7F%80%81%82%83%84%85%86%87%88%89%8A%8B%8C%8D%8E%8F%90%91%92%93%94%95%96%97%98%99%9A%9B%9C%9D%9E%9F%A0%A1%A2%A3%A4%A5%A6%A7%A8%A9%AA%AB%AC%AD%AE%AF%B0%B1%B2%B3%B4%B5%B6%B7%B8%B9%BA%BB%BC%BD%BE%BF%C0%C1%C2%C3%C4%C5%C6%C7%C8%C9%CA%CB%CC%CD%CE%CF%D0%D1%D2%D3%D4%D5%D6%D7%D8%D9%DA%DB%DC%DD%DE%DF%E0%E1%E2%E3%E4%E5%E6%E7%E8%E9%EA%EB%EC%ED%EE%EF%F0%F1%F2%F3%F4%F5%F6%F7%F8%F9%FA%FB%FC%FD%FE%FF

void FUN_0100b5b4(int *param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar9 = param_4;
LAB_0100b5e0:
  do {
    if (param_3 == 0) {
      return;
    }
    uVar10 = 0;
    do {
      if (*(char *)(param_2 + uVar10) == '%') goto LAB_0100b608;
      uVar10 = uVar10 + 1;
    } while (param_3 != uVar10);
    uVar10 = param_3;
LAB_0100b608:
    if (uVar10 == 0) {
      if (param_3 < 4) {
        if (param_3 != 3) goto LAB_0100b8e8;
      }
      else if (*(char *)(param_2 + 3) < -0x40) {
LAB_0100b8e8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,0,3,&DAT_018adf70);
      }
      pbVar3 = (byte *)(param_2 + 1);
      param_3 = param_3 - 3;
      pbVar1 = (byte *)(param_2 + 2);
      param_2 = param_2 + 3;
      bVar4 = (&DAT_00418c87)[*pbVar1] | (&DAT_0037809a)[*pbVar3];
      uVar10 = (uint)(char)bVar4;
      if (""[bVar4] == '\0') {
        iVar8 = (uint)bVar4 * 3;
        if (uVar10 == 0) {
LAB_0100b79c:
          if ("%01%02%03%04%05%06%07%08%09%0A%0B%0C%0D%0E%0F%10%11%12%13%14%15%16%17%18%19%1A%1B%1C%1D%1E%1F%20%21%22%23%24%25%26%27%28%29%2A%2B%2C%2D%2E%2F%30%31%32%33%34%35%36%37%38%39%3A%3B%3C%3D%3E%3F%40%41%42%43%44%45%46%47%48%49%4A%4B%4C%4D%4E%4F%50%51%52%53%54%55%56%57%58%59%5A%5B%5C%5D%5E%5F%60%61%62%63%64%65%66%67%68%69%6A%6B%6C%6D%6E%6F%70%71%72%73%74%75%76%77%78%79%7A%7B%7C%7D%7E%7F%80%81%82%83%84%85%86%87%88%89%8A%8B%8C%8D%8E%8F%90%91%92%93%94%95%96%97%98%99%9A%9B%9C%9D%9E%9F%A0%A1%A2%A3%A4%A5%A6%A7%A8%A9%AA%AB%AC%AD%AE%AF%B0%B1%B2%B3%B4%B5%B6%B7%B8%B9%BA%BB%BC%BD%BE%BF%C0%C1%C2%C3%C4%C5%C6%C7%C8%C9%CA%CB%CC%CD%CE%CF%D0%D1%D2%D3%D4%D5%D6%D7%D8%D9%DA%DB%DC%DD%DE%DF%E0%E1%E2%E3%E4%E5%E6%E7%E8%E9%EA%EB%EC%ED%EE%EF%F0%F1%F2%F3%F4%F5%F6%F7%F8%F9%FA%FB%FC%FD%FE%FF"
              [iVar8] < -0x40) {
LAB_0100b908:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac("%0",0x300,iVar8,iVar8 + 3,&DAT_01882024);
          }
        }
        else {
          if ("%0"[iVar8] < -0x40) goto LAB_0100b908;
          if (uVar10 != 0xffffffff) goto LAB_0100b79c;
        }
        iVar12 = param_1[2];
        if ((uint)(*param_1 - iVar12) < 3) {
          FUN_010e02bc(param_1,iVar12,3);
          iVar12 = param_1[2];
        }
        iVar6 = param_1[1];
        cVar2 = "0"[iVar8];
        *(undefined2 *)(iVar6 + iVar12) = *(undefined2 *)("%0" + iVar8);
        param_1[2] = iVar12 + 3;
        *(char *)((undefined2 *)(iVar6 + iVar12) + 1) = cVar2;
      }
      else {
        iVar8 = param_1[2];
        bVar7 = bVar4;
        if ((uVar10 - 0x41 & 0xff) < 0x1a) {
          bVar7 = bVar4 | 0x20;
        }
        uVar9 = 2;
        if (param_4 == 0) {
          bVar7 = bVar4;
        }
        if (uVar10 < 0x80000000) {
          uVar9 = 1;
        }
        if ((uint)(*param_1 - iVar8) < uVar9) {
          FUN_010e02bc(param_1,iVar8,uVar9);
          pbVar3 = (byte *)(param_1[1] + param_1[2]);
        }
        else {
          pbVar3 = (byte *)(param_1[1] + iVar8);
        }
        if (0x7fffffff < uVar10) {
          pbVar3[1] = bVar7 & 0xbf;
          bVar7 = bVar4 >> 6 | 0xc0;
        }
        *pbVar3 = bVar7;
        param_1[2] = uVar9 + iVar8;
        uVar9 = param_4;
      }
      goto LAB_0100b5e0;
    }
    if (uVar10 < param_3) {
      if (*(char *)(param_2 + uVar10) < -0x40) goto LAB_0100b8c8;
    }
    else if (param_3 != uVar10) {
LAB_0100b8c8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,0,uVar10,&DAT_018adf70);
    }
    uVar11 = param_1[2];
    uVar5 = uVar11;
    if (*param_1 - uVar11 < uVar10) {
      FUN_010e02bc(param_1,uVar11,uVar10);
      uVar5 = param_1[2];
    }
    iVar8 = param_1[1];
    iVar12 = param_2 + uVar10;
    param_3 = param_3 - uVar10;
    FUN_016dd1aa(iVar8 + uVar5,param_2,uVar10);
    uVar5 = uVar5 + uVar10;
    uVar10 = uVar9 & 1;
    param_1[2] = uVar5;
    param_2 = iVar12;
    uVar9 = 0;
    if (uVar10 != 0) {
      if (uVar11 != 0) {
        if (uVar11 < uVar5) {
          if (*(char *)(iVar8 + uVar11) < -0x40) goto LAB_0100b8ac;
        }
        else if (uVar5 != uVar11) {
LAB_0100b8ac:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar8,uVar5,uVar11,uVar5,&DAT_018820dc);
        }
      }
      uVar9 = 1;
      if (uVar5 != uVar11) {
        iVar12 = uVar5 - uVar11;
        pbVar3 = (byte *)(iVar8 + uVar11);
        do {
          bVar4 = *pbVar3;
          if (bVar4 - 0x41 < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          *pbVar3 = bVar4;
          iVar12 = iVar12 + -1;
          pbVar3 = pbVar3 + 1;
        } while (iVar12 != 0);
      }
    }
  } while( true );
}

