// FUN_00949f20 @ 00949f20 size=616 calls_out=5 calls_in=2
// strings: 

int FUN_00949f20(char *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 local_5c;
  undefined1 auStack_58 [6];
  undefined2 local_52 [17];
  
  iVar3 = FUN_00947ca4();
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar8 = *(undefined4 **)(param_1 + 4);
  piVar6 = (int *)*puVar8;
  iVar3 = piVar6[2];
  if ((uint)(*piVar6 - iVar3) < 2) {
    FUN_00933680(piVar6,iVar3,2,1,1);
    iVar3 = piVar6[2];
  }
  uVar9 = FUN_016d6168(SUB84(in_d0 * 1000.0,0));
  uVar7 = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar9)) *
          (int)(longlong)(double)CONCAT44(extraout_s1,uVar9);
  piVar6[2] = iVar3 + 2;
  *(undefined2 *)(piVar6[1] + iVar3) = 0x203a;
  iVar3 = 10;
  piVar6 = (int *)*puVar8;
  if (9999 < uVar7) {
    iVar4 = 0;
    uVar5 = uVar7;
    do {
      iVar3 = iVar4;
      uVar7 = uVar5 / 10000;
      uVar2 = (uint)((short)(uVar5 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_52 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)local_52 + iVar3 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar5 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar5;
      iVar4 = iVar3 + -4;
      uVar5 = uVar7;
    } while (bVar1);
    iVar3 = iVar3 + 6;
    local_5c = puVar8;
  }
  if (99 < uVar7) {
    uVar5 = (uint)((short)((uVar7 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_58 + iVar3 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar7 + uVar5 * -100 & 0xffff) * 2);
    iVar3 = iVar3 + -2;
    uVar7 = uVar5;
  }
  if (uVar7 < 10) {
    iVar4 = iVar3 + -1;
    auStack_58[iVar3 + -1] = (byte)uVar7 | 0x30;
  }
  else {
    iVar4 = iVar3 + -2;
    *(undefined2 *)(auStack_58 + iVar3 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar7 * 2);
  }
  iVar3 = piVar6[2];
  uVar7 = 10 - iVar4;
  if ((uint)(*piVar6 - iVar3) < uVar7) {
    FUN_00933680(piVar6,iVar3,uVar7,1,1);
    iVar3 = piVar6[2];
  }
  FUN_016dd1aa(piVar6[1] + iVar3,auStack_58 + iVar4,uVar7);
  piVar6[2] = iVar3 + uVar7;
  *(undefined1 *)(puVar8 + 4) = 1;
  return 0;
}

