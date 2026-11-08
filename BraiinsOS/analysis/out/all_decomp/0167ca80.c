// FUN_0167ca80 @ 0167ca80 size=256 calls_out=4 calls_in=2
// strings: 

void FUN_0167ca80(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_2 < 0xf) {
    uVar5 = (param_2 & 8) + 8;
    if (param_2 < 4) {
      uVar5 = 4;
    }
    uVar3 = uVar5 + 4;
    uVar4 = uVar3 + uVar5 * 4;
    if (uVar4 < uVar3) goto LAB_0167cb5c;
  }
  else {
    bVar7 = 0x1ffffffe < param_2;
    bVar6 = param_2 == 0x1fffffff;
    piVar1 = param_1;
    if (param_2 < 0x20000000) {
      iVar2 = (int)((ulonglong)(param_2 << 3) * 0x24924925 >> 0x20);
      piVar1 = (int *)0xffffffff;
      param_2 = LZCOUNT((iVar2 + (param_2 * 8 - iVar2 >> 1) >> 2) - 1);
      bVar7 = 0x3ffffffd < 0xffffffffU >> param_2;
      bVar6 = 0xffffffffU >> param_2 == 0x3ffffffe;
    }
    if (bVar7 && !bVar6) goto LAB_0167cb5c;
    uVar3 = (uint)piVar1 >> (param_2 & 0xff);
    uVar5 = uVar3 + 1;
    uVar3 = uVar3 + 5;
    uVar4 = uVar3 + uVar5 * 4;
    if (uVar4 < uVar3) goto LAB_0167cb5c;
  }
  if (uVar4 < 0x7ffffffd) {
    iVar2 = thunk_FUN_016d4a50(uVar4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,uVar4);
    }
    iVar2 = iVar2 + uVar5 * 4;
    FUN_016dd606(iVar2,0xff,uVar3);
    uVar3 = uVar5 - 1;
    param_1[1] = uVar3;
    if (7 < uVar3) {
      uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
    }
    *param_1 = iVar2;
    param_1[2] = uVar3;
    param_1[3] = 0;
    return;
  }
LAB_0167cb5c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_004144a9,0x39,&DAT_018ada90);
}

