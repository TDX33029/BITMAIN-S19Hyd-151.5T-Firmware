// FUN_00949ca0 @ 00949ca0 size=624 calls_out=5 calls_in=1
// strings: 

int FUN_00949ca0(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 local_50;
  undefined1 auStack_4c [16];
  undefined2 local_3c [12];
  
  local_50 = FUN_00947ca4();
  if (local_50 != 0) {
    return local_50;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar9 = *(undefined4 **)(param_1 + 4);
  piVar5 = (int *)*puVar9;
  iVar2 = piVar5[2];
  if ((uint)(*piVar5 - iVar2) < 2) {
    FUN_00933680(piVar5,iVar2,2,1,1);
    iVar2 = piVar5[2];
  }
  piVar5[2] = iVar2 + 2;
  *(undefined2 *)(piVar5[1] + iVar2) = 0x203a;
  piVar5 = (int *)*puVar9;
  if (param_4 < 10000) {
    uVar3 = 0;
    iVar2 = 0x14;
    uVar6 = param_4;
    if (99 < param_4) goto LAB_00949e08;
LAB_00949dc8:
    iVar8 = iVar2;
    if (uVar3 == 0 && (9 < uVar6) <= uVar3) {
LAB_00949e50:
      iVar2 = iVar8 + -1;
      auStack_4c[iVar8 + -1] = (byte)uVar6 | 0x30;
      goto LAB_00949e60;
    }
  }
  else {
    iVar8 = 0;
    uVar6 = param_4;
    uVar7 = 0;
    do {
      iVar2 = iVar8;
      uVar11 = FUN_01846088(uVar6,uVar7,10000,0);
      uVar3 = (uint)((ulonglong)uVar11 >> 0x20);
      param_4 = (uint)uVar11;
      uVar4 = uVar6 + param_4 * -10000;
      uVar1 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_3c + iVar2) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
      *(undefined2 *)((int)local_3c + iVar2 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar4 + uVar1 * -100 & 0xffff) * 2);
      bVar10 = uVar6 < 100000000;
      uVar1 = -uVar7;
      iVar8 = iVar2 + -4;
      uVar6 = param_4;
      uVar7 = uVar3;
    } while (bVar10 <= uVar1);
    iVar2 = iVar2 + 0x10;
    if (-uVar3 < (uint)(param_4 < 100)) goto LAB_00949dc8;
LAB_00949e08:
    iVar8 = iVar2 + -2;
    uVar6 = (uint)((short)((param_4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_4c + iVar2 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (param_4 + uVar6 * -100 & 0xffff) * 2);
    if (uVar6 < 10) goto LAB_00949e50;
  }
  iVar2 = iVar8 + -2;
  *(undefined2 *)(auStack_4c + iVar8 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
LAB_00949e60:
  iVar8 = piVar5[2];
  uVar6 = 0x14 - iVar2;
  if ((uint)(*piVar5 - iVar8) < uVar6) {
    FUN_00933680(piVar5,iVar8,uVar6,1,1);
    iVar8 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar8,auStack_4c + iVar2,uVar6);
  piVar5[2] = iVar8 + uVar6;
  *(undefined1 *)(puVar9 + 4) = 1;
  return local_50;
}

