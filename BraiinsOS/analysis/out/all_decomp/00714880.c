// FUN_00714880 @ 00714880 size=728 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_00714880(char *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_40 [14];
  
  uVar10 = CONCAT44(param_4,param_3);
  if (*param_1 != '\0') {
    local_50 = 10;
    uVar1 = FUN_0157c50c(&local_50,0,0);
    return uVar1;
  }
  puVar9 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar5 = (int *)*puVar9;
    iVar2 = piVar5[2];
    if (*piVar5 == iVar2) {
      FUN_006bca64(piVar5,iVar2,1,1,1);
      iVar2 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar2) = 0x2c;
    piVar5[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_007536f4(&local_50,*puVar9,&DAT_0056a588,8);
  if ((char)local_50 != '\x04') {
    uVar1 = FUN_0157c4a0(local_50,local_4c);
    return uVar1;
  }
  piVar5 = (int *)*puVar9;
  iVar2 = piVar5[2];
  if (*piVar5 == iVar2) {
    FUN_006bca64(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x3a;
  iVar3 = 0x14;
  piVar5[2] = iVar2 + 1;
  piVar5 = (int *)*puVar9;
  if (param_4 == 0 && (9999 < param_3) <= param_4) {
    if ((uint)(param_3 < 100) <= -param_4) goto LAB_00714a24;
LAB_007149e8:
    uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar6 = (uint)uVar10;
    iVar2 = iVar3;
    if (uVar4 == 0 && (9 < uVar6) <= uVar4) {
LAB_00714a68:
      iVar3 = iVar2 + -1;
      *(byte *)((int)local_40 + iVar2 + -0x11) = (byte)uVar6 | 0x30;
      goto LAB_00714a74;
    }
  }
  else {
    iVar2 = 0;
    local_54 = piVar5;
    do {
      iVar3 = iVar2;
      iVar7 = (int)((ulonglong)uVar10 >> 0x20);
      uVar8 = (uint)uVar10;
      uVar10 = FUN_01846088(uVar8,iVar7,10000,0);
      param_3 = (uint)uVar10;
      uVar4 = uVar8 + param_3 * -10000;
      uVar6 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
      *(undefined2 *)((int)local_40 + iVar3 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar4 + uVar6 * -100 & 0xffff) * 2);
      iVar2 = iVar3 + -4;
    } while ((uint)(uVar8 < 100000000) <= (uint)-iVar7);
    iVar3 = iVar3 + 0x10;
    piVar5 = local_54;
    if ((uint)-(int)((ulonglong)uVar10 >> 0x20) < (uint)(param_3 < 100)) goto LAB_007149e8;
LAB_00714a24:
    iVar2 = iVar3 + -2;
    uVar6 = (uint)((short)((param_3 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_40 + iVar3 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (param_3 + uVar6 * -100 & 0xffff) * 2);
    if (uVar6 < 10) goto LAB_00714a68;
  }
  iVar3 = iVar2 + -2;
  *(undefined2 *)((int)local_40 + iVar2 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
LAB_00714a74:
  iVar2 = piVar5[2];
  uVar6 = 0x14 - iVar3;
  if ((uint)(*piVar5 - iVar2) < uVar6) {
    FUN_006bca64(piVar5,iVar2,uVar6,1,1);
    iVar2 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar2,(int)local_40 + iVar3 + -0x10,uVar6);
  piVar5[2] = iVar2 + uVar6;
  return 0;
}

