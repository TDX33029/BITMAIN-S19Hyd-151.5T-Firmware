// FUN_0071467c @ 0071467c size=484 calls_out=9 calls_in=1
// strings: difficulty

undefined4 FUN_0071467c(char *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48 [10];
  
  if (*param_1 != '\0') {
    local_48[0] = 10;
    uVar4 = FUN_0157c50c(local_48,0,0);
    return uVar4;
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar5;
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_006bca64(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar1) = 0x2c;
    piVar3[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_007536f4(local_48,*puVar5,"difficulty",10);
  if ((char)local_48[0] != '\x04') {
    uVar4 = FUN_0157c4a0(local_48[0],local_48[1]);
    return uVar4;
  }
  piVar3 = (int *)*puVar5;
  iVar1 = piVar3[2];
  if (*piVar3 == iVar1) {
    FUN_006bca64(piVar3,iVar1,1,1,1);
    iVar1 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar1) = 0x3a;
  piVar3[2] = iVar1 + 1;
  uVar4 = *puVar5;
  iVar1 = FUN_00fab440(*param_2,param_2[1],param_2[2],param_2[3],local_48);
  iVar6 = 0x27 - iVar1;
  if (iVar1 == 0x27) {
    iVar2 = 1;
    iVar7 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar6);
    iVar7 = iVar6;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar6);
    }
  }
  FUN_016dd1aa(iVar2,(int)local_48 + iVar1,iVar6);
  FUN_007536f4(local_48,uVar4,iVar2,iVar6);
  uVar4 = 0;
  if ((char)local_48[0] != '\x04') {
    uVar4 = FUN_0157c4a0(local_48[0],local_48[1]);
  }
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  return uVar4;
}

