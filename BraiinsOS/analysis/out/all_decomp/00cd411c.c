// FUN_00cd411c @ 00cd411c size=740 calls_out=6 calls_in=2
// strings: 

undefined4
FUN_00cd411c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_40 [14];
  
  uVar10 = CONCAT44(param_6,param_5);
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  piVar9 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar9;
  if (param_1[1] != '\x01') {
    iVar4 = piVar2[2];
    if (*piVar2 == iVar4) {
      FUN_00d653ec(piVar2,iVar4,1,1,1);
      iVar4 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar4) = 0x2c;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*piVar9;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_50,piVar2,param_2,param_3);
  if ((char)local_50 != '\x04') {
    uVar1 = FUN_0157c4a0(local_50,local_4c);
    return uVar1;
  }
  piVar2 = (int *)*piVar9;
  iVar4 = piVar2[2];
  if (*piVar2 == iVar4) {
    FUN_00d653ec(piVar2,iVar4,1,1,1);
    iVar4 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar4) = 0x3a;
  iVar4 = 0x14;
  piVar2[2] = piVar2[2] + 1;
  piVar9 = (int *)*piVar9;
  if (param_6 == 0 && (9999 < param_5) <= param_6) {
    if ((uint)(param_5 < 100) <= -param_6) goto LAB_00cd42cc;
LAB_00cd4290:
    uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar7 = (uint)uVar10;
    iVar3 = iVar4;
    if (uVar5 == 0 && (9 < uVar7) <= uVar5) {
LAB_00cd4310:
      iVar4 = iVar3 + -1;
      *(byte *)((int)local_40 + iVar3 + -0x11) = (byte)uVar7 | 0x30;
      goto LAB_00cd431c;
    }
  }
  else {
    iVar3 = 0;
    local_54 = piVar9;
    do {
      iVar4 = iVar3;
      iVar6 = (int)((ulonglong)uVar10 >> 0x20);
      uVar8 = (uint)uVar10;
      uVar10 = FUN_01846088(uVar8,iVar6,10000,0);
      param_5 = (uint)uVar10;
      uVar5 = uVar8 + param_5 * -10000;
      uVar7 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar7 * 2);
      *(undefined2 *)((int)local_40 + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar5 + uVar7 * -100 & 0xffff) * 2);
      iVar3 = iVar4 + -4;
    } while ((uint)(uVar8 < 100000000) <= (uint)-iVar6);
    iVar4 = iVar4 + 0x10;
    piVar9 = local_54;
    if ((uint)-(int)((ulonglong)uVar10 >> 0x20) < (uint)(param_5 < 100)) goto LAB_00cd4290;
LAB_00cd42cc:
    iVar3 = iVar4 + -2;
    uVar7 = (uint)((short)((param_5 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_40 + iVar4 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (param_5 + uVar7 * -100 & 0xffff) * 2);
    if (uVar7 < 10) goto LAB_00cd4310;
  }
  iVar4 = iVar3 + -2;
  *(undefined2 *)((int)local_40 + iVar3 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar7 * 2);
LAB_00cd431c:
  uVar7 = 0x14 - iVar4;
  iVar3 = piVar9[2];
  if ((uint)(*piVar9 - iVar3) < uVar7) {
    FUN_00d653ec(piVar9,iVar3,uVar7,1,1);
    iVar3 = piVar9[2];
  }
  FUN_016dd1aa(piVar9[1] + iVar3,(int)local_40 + iVar4 + -0x10,uVar7);
  piVar9[2] = piVar9[2] + uVar7;
  return 0;
}

