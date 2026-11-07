// FUN_00e5b648 @ 00e5b648 size=580 calls_out=4 calls_in=5
// strings: 

int FUN_00e5b648(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_50;
  undefined1 auStack_4c [6];
  undefined2 local_46 [17];
  
  local_50 = FUN_00e5b230();
  if (local_50 != 0) {
    return local_50;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar8 = *(undefined4 **)(param_1 + 4);
  piVar5 = (int *)*puVar8;
  iVar3 = piVar5[2];
  if ((uint)(*piVar5 - iVar3) < 2) {
    FUN_00edff4c(piVar5,iVar3,2,1,1);
    iVar3 = piVar5[2];
  }
  piVar5[2] = iVar3 + 2;
  iVar4 = 10;
  *(undefined2 *)(piVar5[1] + iVar3) = 0x203a;
  piVar5 = (int *)*puVar8;
  if (9999 < param_4) {
    iVar3 = 0;
    uVar6 = param_4;
    do {
      iVar4 = iVar3;
      param_4 = uVar6 / 10000;
      uVar7 = param_4 * 0xd8f0 + uVar6;
      uVar2 = (uint)((short)((uVar7 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_46 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)local_46 + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar2 * 0xff9c + uVar7 & 0xffff) * 2);
      bVar1 = 99999999 < uVar6;
      iVar3 = iVar4 + -4;
      uVar6 = param_4;
    } while (bVar1);
    iVar4 = iVar4 + 6;
  }
  if (99 < param_4) {
    uVar6 = (uint)((short)((param_4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_4c + iVar4 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar6 * 0xff9c + param_4 & 0xffff) * 2);
    iVar4 = iVar4 + -2;
    param_4 = uVar6;
  }
  if (param_4 < 10) {
    iVar3 = iVar4 + -1;
    auStack_4c[iVar4 + -1] = (byte)param_4 | 0x30;
  }
  else {
    iVar3 = iVar4 + -2;
    *(undefined2 *)(auStack_4c + iVar4 + -2) = *(undefined2 *)(&DAT_0040f4ca + param_4 * 2);
  }
  iVar4 = piVar5[2];
  uVar6 = 10 - iVar3;
  if ((uint)(*piVar5 - iVar4) < uVar6) {
    FUN_00edff4c(piVar5,iVar4,uVar6,1,1);
    iVar4 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar4,auStack_4c + iVar3,uVar6);
  piVar5[2] = iVar4 + uVar6;
  *(undefined1 *)(puVar8 + 4) = 1;
  return local_50;
}

