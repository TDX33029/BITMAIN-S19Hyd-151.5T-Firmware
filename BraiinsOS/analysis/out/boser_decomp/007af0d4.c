// FUN_007af0d4 @ 007af0d4 size=276 calls_out=4 calls_in=2
// strings: 

void FUN_007af0d4(uint *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_30;
  uint local_2c;
  
  piVar4 = (int *)(param_2 + 0x1030);
  while( true ) {
    FUN_007aee1c(&local_30,param_2);
    if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) break;
    uVar5 = *(uint *)(param_2 + 0x1040);
    iVar6 = *(int *)(param_2 + 0x1048);
    iVar7 = *piVar4;
    iVar8 = *(int *)(param_2 + 0x1034);
    iVar3 = *(int *)(param_2 + 0x1044) + iVar6;
    FUN_01bed93e(iVar3,0,uVar5 - iVar6);
    cVar1 = FUN_01341760(&DAT_00001028 + param_2,1,0,iVar3,uVar5 - iVar6,4);
    uVar2 = iVar6 + (*piVar4 - iVar7);
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    *(uint *)(param_2 + 0x1048) = uVar5;
    if (cVar1 == '\x03') {
      FUN_013414c8(&local_30);
      if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) break;
    }
    if (iVar7 == *piVar4 && iVar8 == *(int *)(param_2 + 0x1034)) {
      *(undefined1 *)param_1 = 4;
      return;
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  return;
}

