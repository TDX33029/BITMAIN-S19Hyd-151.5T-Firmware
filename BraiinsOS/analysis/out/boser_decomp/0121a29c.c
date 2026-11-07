// FUN_0121a29c @ 0121a29c size=212 calls_out=6 calls_in=0
// strings: 

void FUN_0121a29c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38 [6];
  
  FUN_019ac130(local_38,0);
  local_44 = 0;
  local_48 = 0;
  local_58 = local_38[0];
  uStack_54 = local_38[1];
  uStack_50 = local_38[2];
  local_40 = 0;
  FUN_019ac248(local_38,&local_58,&local_48);
  if ((local_38[0] & 1) == 0) {
    iVar1 = FUN_012fc968(local_38[2],local_38[3],local_38,0x14);
    iVar2 = 0x14 - iVar1;
    iVar3 = 1;
    iVar4 = 0;
    if ((iVar1 != 0x14) && (iVar3 = FUN_01298504(iVar2,1), iVar4 = iVar2, iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar2);
    }
    FUN_01bed4e2(iVar3,(int)local_38 + iVar1,iVar2);
    *param_1 = iVar4;
    param_1[1] = iVar3;
    param_1[2] = iVar2;
  }
  else {
    *param_1 = -0x80000000;
  }
  return;
}

