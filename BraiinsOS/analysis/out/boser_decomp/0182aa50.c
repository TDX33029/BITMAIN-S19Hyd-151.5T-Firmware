// FUN_0182aa50 @ 0182aa50 size=176 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_0182aa50(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [80];
  undefined8 local_68;
  undefined1 auStack_60 [80];
  
  uVar2 = (**(code **)(param_1[1] + 0x10))(*param_1);
  FUN_019e6e74(auStack_b8,&DAT_01d1f150,param_1[2],param_1[3],param_1[4],&DAT_01d1f150);
  FUN_01bed4e2(auStack_60,auStack_b8,0x50);
  FUN_01bed4e2(auStack_b8,auStack_60,0x50);
  local_68 = uVar2;
  iVar1 = thunk_FUN_01be5118(0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x58);
  }
  FUN_01bed4e2(iVar1,auStack_60,0x50);
  *(undefined8 *)(iVar1 + 0x50) = uVar2;
  return CONCAT44(&UNK_01d1e1c4,iVar1);
}

