// FUN_00949914 @ 00949914 size=568 calls_out=4 calls_in=2
// strings: 

int FUN_00949914(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_50;
  undefined1 auStack_4c [6];
  undefined2 local_46 [17];
  
  iVar3 = FUN_00947ca4();
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  piVar5 = (int *)*puVar7;
  iVar3 = piVar5[2];
  if ((uint)(*piVar5 - iVar3) < 2) {
    FUN_00933680(piVar5,iVar3,2,1,1);
    iVar3 = piVar5[2];
  }
  piVar5[2] = iVar3 + 2;
  *(undefined2 *)(piVar5[1] + iVar3) = 0x203a;
  iVar3 = 10;
  piVar5 = (int *)*puVar7;
  if (9999 < param_4) {
    iVar4 = 0;
    uVar6 = param_4;
    do {
      iVar3 = iVar4;
      param_4 = uVar6 / 10000;
      uVar2 = (uint)((short)(uVar6 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_46 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)local_46 + iVar3 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar6 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar6;
      iVar4 = iVar3 + -4;
      uVar6 = param_4;
    } while (bVar1);
    iVar3 = iVar3 + 6;
    local_50 = puVar7;
  }
  if (99 < param_4) {
    uVar6 = (uint)((short)((param_4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_4c + iVar3 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (param_4 + uVar6 * -100 & 0xffff) * 2);
    iVar3 = iVar3 + -2;
    param_4 = uVar6;
  }
  if (param_4 < 10) {
    iVar4 = iVar3 + -1;
    auStack_4c[iVar3 + -1] = (byte)param_4 | 0x30;
  }
  else {
    iVar4 = iVar3 + -2;
    *(undefined2 *)(auStack_4c + iVar3 + -2) = *(undefined2 *)(&DAT_0040f4ca + param_4 * 2);
  }
  iVar3 = piVar5[2];
  uVar6 = 10 - iVar4;
  if ((uint)(*piVar5 - iVar3) < uVar6) {
    FUN_00933680(piVar5,iVar3,uVar6,1,1);
    iVar3 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar3,auStack_4c + iVar4,uVar6);
  piVar5[2] = iVar3 + uVar6;
  *(undefined1 *)(puVar7 + 4) = 1;
  return 0;
}

