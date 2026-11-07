// FUN_00cd2f2c @ 00cd2f2c size=736 calls_out=6 calls_in=7
// strings: 

undefined4 FUN_00cd2f2c(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_40 [14];
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  piVar9 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar9;
  if (param_1[1] != '\x01') {
    iVar6 = piVar3[2];
    if (*piVar3 == iVar6) {
      FUN_00d653ec(piVar3,iVar6,1,1,1);
      iVar6 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar6) = 0x2c;
    piVar3[2] = piVar3[2] + 1;
    piVar3 = (int *)*piVar9;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_50,piVar3,param_2,param_3);
  if ((char)local_50 != '\x04') {
    uVar2 = FUN_0157c4a0(local_50,local_4c);
    return uVar2;
  }
  piVar3 = (int *)*piVar9;
  iVar6 = piVar3[2];
  if (*piVar3 == iVar6) {
    FUN_00d653ec(piVar3,iVar6,1,1,1);
    iVar6 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar6) = 0x3a;
  piVar3[2] = piVar3[2] + 1;
  piVar9 = (int *)*piVar9;
  if (param_4 < 10000) {
    uVar4 = 0;
    iVar6 = 0x14;
    uVar8 = param_4;
    if (99 < param_4) goto LAB_00cd30d8;
LAB_00cd309c:
    iVar5 = iVar6;
    if (uVar4 == 0 && (9 < uVar8) <= uVar4) {
LAB_00cd311c:
      iVar6 = iVar5 + -1;
      *(byte *)((int)local_40 + iVar5 + -0x11) = (byte)uVar8 | 0x30;
      goto LAB_00cd3128;
    }
  }
  else {
    iVar5 = 0;
    uVar8 = param_4;
    uVar10 = 0;
    local_54 = piVar9;
    do {
      iVar6 = iVar5;
      uVar12 = FUN_01846088(uVar8,uVar10,10000,0);
      uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
      param_4 = (uint)uVar12;
      uVar7 = uVar8 + param_4 * -10000;
      uVar1 = (uint)((short)((uVar7 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar6) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
      *(undefined2 *)((int)local_40 + iVar6 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar7 + uVar1 * -100 & 0xffff) * 2);
      bVar11 = uVar8 < 100000000;
      uVar1 = -uVar10;
      iVar5 = iVar6 + -4;
      uVar8 = param_4;
      uVar10 = uVar4;
    } while (bVar11 <= uVar1);
    iVar6 = iVar6 + 0x10;
    piVar9 = local_54;
    if (-uVar4 < (uint)(param_4 < 100)) goto LAB_00cd309c;
LAB_00cd30d8:
    iVar5 = iVar6 + -2;
    uVar8 = (uint)((short)((param_4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_40 + iVar6 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (param_4 + uVar8 * -100 & 0xffff) * 2);
    if (uVar8 < 10) goto LAB_00cd311c;
  }
  iVar6 = iVar5 + -2;
  *(undefined2 *)((int)local_40 + iVar5 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar8 * 2);
LAB_00cd3128:
  uVar8 = 0x14 - iVar6;
  iVar5 = piVar9[2];
  if ((uint)(*piVar9 - iVar5) < uVar8) {
    FUN_00d653ec(piVar9,iVar5,uVar8,1,1);
    iVar5 = piVar9[2];
  }
  FUN_016dd1aa(piVar9[1] + iVar5,(int)local_40 + iVar6 + -0x10,uVar8);
  piVar9[2] = piVar9[2] + uVar8;
  return 0;
}

