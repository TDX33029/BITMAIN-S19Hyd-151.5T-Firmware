// FUN_018dd1a8 @ 018dd1a8 size=268 calls_out=8 calls_in=0
// strings: 

void FUN_018dd1a8(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_14c;
  undefined1 auStack_148 [64];
  undefined4 local_108;
  uint local_104;
  int local_100;
  uint local_fc;
  undefined1 local_9c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_01bed4e2(&local_108,param_2,0xd8);
  FUN_0189039c(&local_14c,&local_108);
  uVar2 = *(uint *)(local_14c + 0x48);
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x40,&DAT_01d2571c);
  }
  if (uVar2 == 0) {
    iVar1 = 1;
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_01298504(uVar2,1);
    uVar4 = uVar2;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar2);
    }
  }
  FUN_01bed4e2(iVar1,auStack_148,uVar2);
  iVar3 = *(int *)(param_2 + 0xd8);
  local_9c = 0x12;
  local_108 = 0x80000013;
  local_104 = uVar4;
  local_100 = iVar1;
  local_fc = uVar2;
  FUN_018b251c(&local_30,&local_108);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  *(bool *)(param_1 + 3) = iVar3 != -0x80000000;
  FUN_018dc368(&local_108);
  if (iVar3 != -0x80000000) {
    FUN_0134bd64(iVar3,*(undefined4 *)(param_2 + 0xdc));
  }
  return;
}

