// FUN_0175a1ec @ 0175a1ec size=184 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_0175a1ec(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [80];
  undefined8 local_70;
  undefined1 auStack_68 [80];
  undefined8 local_18;
  
  uVar2 = (**(code **)(param_1[1] + 0x10))(*param_1);
  local_18 = uVar2;
  FUN_019e6e74(auStack_c0,&DAT_01d1f150,param_1[2],param_1[3],param_1[4],&DAT_01d1f150);
  FUN_01bed4e2(auStack_68,auStack_c0,0x50);
  FUN_01bed4e2(auStack_c0,auStack_68,0x50);
  local_70 = uVar2;
  iVar1 = thunk_FUN_01be5118(0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x58);
  }
  FUN_01bed4e2(iVar1,auStack_68,0x50);
  *(undefined8 *)(iVar1 + 0x50) = uVar2;
  return CONCAT44(&UNK_01d19ee4,iVar1);
}

