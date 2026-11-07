// FUN_01340e58 @ 01340e58 size=260 calls_out=4 calls_in=2
// strings: 

void FUN_01340e58(uint *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_30;
  uint local_2c;
  
  piVar3 = (int *)(param_2 + 8);
  while( true ) {
    FUN_01340f5c(&local_30,param_2);
    if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) break;
    uVar5 = *(uint *)(param_2 + 0x1c);
    iVar6 = *(int *)(param_2 + 0x24);
    iVar7 = *piVar3;
    iVar8 = *(int *)(param_2 + 0xc);
    iVar4 = *(int *)(param_2 + 0x20) + iVar6;
    FUN_01bed93e(iVar4,0,uVar5 - iVar6);
    cVar1 = FUN_01341760(param_2,1,0,iVar4,uVar5 - iVar6,4);
    uVar2 = iVar6 + (*piVar3 - iVar7);
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    *(uint *)(param_2 + 0x24) = uVar5;
    if (cVar1 == '\x03') {
      FUN_013414c8(&local_30);
      if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) break;
    }
    if (iVar7 == *piVar3 && iVar8 == *(int *)(param_2 + 0xc)) {
      *(undefined1 *)param_1 = 4;
      return;
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  return;
}

