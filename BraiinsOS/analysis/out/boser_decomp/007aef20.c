// FUN_007aef20 @ 007aef20 size=320 calls_out=4 calls_in=3
// strings: 

void FUN_007aef20(uint *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  piVar3 = (int *)(&DAT_00001028 + param_2);
  do {
    FUN_007aee1c(&local_30,param_2);
    uVar6 = local_2c;
    if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
      local_2c = local_30;
      local_28 = uVar6;
      goto LAB_007af02c;
    }
    uVar6 = *(uint *)(param_2 + 0x1040);
    iVar7 = *(int *)(param_2 + 0x1048);
    iVar5 = *piVar3;
    iVar4 = *(int *)(param_2 + 0x1044) + iVar7;
    iVar8 = *(int *)(param_2 + 0x1030);
    FUN_01bed93e(iVar4,0,uVar6 - iVar7);
    bVar1 = FUN_01341760(piVar3,param_3,param_4,iVar4,uVar6 - iVar7,0);
    iVar4 = *piVar3;
    uVar2 = iVar7 + (*(int *)(param_2 + 0x1030) - iVar8);
    if (uVar2 < uVar6) {
      uVar6 = uVar2;
    }
    *(uint *)(param_2 + 0x1048) = uVar6;
  } while (((param_4 != 0) && (iVar4 - iVar5 == 0)) && (bVar1 < 2));
  if (bVar1 == 3) {
    FUN_019a18a8(&local_2c,0x14,&DAT_00450e3d,0x16);
LAB_007af02c:
    *param_1 = local_2c;
    param_1[1] = local_28;
  }
  else {
    param_1[1] = iVar4 - iVar5;
    *(undefined1 *)param_1 = 4;
  }
  return;
}

