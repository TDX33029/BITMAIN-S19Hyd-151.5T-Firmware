// FUN_00e5bdc8 @ 00e5bdc8 size=624 calls_out=5 calls_in=4
// strings: 

int FUN_00e5bdc8(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  uint in_stack_00000000;
  uint in_stack_00000004;
  undefined4 local_50;
  undefined1 auStack_4c [16];
  undefined2 local_3c [12];
  
  uVar9 = CONCAT44(in_stack_00000004,in_stack_00000000);
  local_50 = FUN_00e5b230();
  if (local_50 != 0) {
    return local_50;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  piVar4 = (int *)*puVar7;
  iVar1 = piVar4[2];
  if ((uint)(*piVar4 - iVar1) < 2) {
    FUN_00edff4c(piVar4,iVar1,2,1,1);
    iVar1 = piVar4[2];
  }
  piVar4[2] = iVar1 + 2;
  iVar2 = 0x14;
  *(undefined2 *)(piVar4[1] + iVar1) = 0x203a;
  piVar4 = (int *)*puVar7;
  if (in_stack_00000004 == 0 && (9999 < in_stack_00000000) <= in_stack_00000004) {
    if ((uint)(in_stack_00000000 < 100) <= -in_stack_00000004) goto LAB_00e5bf34;
LAB_00e5bef4:
    uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar5 = (uint)uVar9;
    iVar1 = iVar2;
    if (uVar3 == 0 && (9 < uVar5) <= uVar3) {
LAB_00e5bf78:
      iVar2 = iVar1 + -1;
      auStack_4c[iVar1 + -1] = (byte)uVar5 | 0x30;
      goto LAB_00e5bf88;
    }
  }
  else {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar8 = (int)((ulonglong)uVar9 >> 0x20);
      uVar6 = (uint)uVar9;
      uVar9 = FUN_01846088(uVar6,iVar8,10000,0);
      in_stack_00000000 = (uint)uVar9;
      uVar3 = in_stack_00000000 * 0xd8f0 + uVar6;
      uVar5 = (uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_3c + iVar2) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
      *(undefined2 *)((int)local_3c + iVar2 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar5 * 0xff9c + uVar3 & 0xffff) * 2);
      iVar1 = iVar2 + -4;
    } while ((uint)(uVar6 < 100000000) <= (uint)-iVar8);
    iVar2 = iVar2 + 0x10;
    if ((uint)-(int)((ulonglong)uVar9 >> 0x20) < (uint)(in_stack_00000000 < 100)) goto LAB_00e5bef4;
LAB_00e5bf34:
    iVar1 = iVar2 + -2;
    uVar5 = (uint)((short)((in_stack_00000000 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_4c + iVar2 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar5 * 0xff9c + in_stack_00000000 & 0xffff) * 2);
    if (uVar5 < 10) goto LAB_00e5bf78;
  }
  iVar2 = iVar1 + -2;
  *(undefined2 *)(auStack_4c + iVar1 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
LAB_00e5bf88:
  iVar1 = piVar4[2];
  uVar5 = 0x14 - iVar2;
  if ((uint)(*piVar4 - iVar1) < uVar5) {
    FUN_00edff4c(piVar4,iVar1,uVar5,1,1);
    iVar1 = piVar4[2];
  }
  FUN_016dd1aa(piVar4[1] + iVar1,auStack_4c + iVar2,uVar5);
  piVar4[2] = iVar1 + uVar5;
  *(undefined1 *)(puVar7 + 4) = 1;
  return local_50;
}

