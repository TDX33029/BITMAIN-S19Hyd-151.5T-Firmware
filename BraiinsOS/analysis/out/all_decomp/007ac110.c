// FUN_007ac110 @ 007ac110 size=148 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_007ac110(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_c30;
  undefined4 uStack_c2c;
  undefined4 uStack_c28;
  undefined4 uStack_c24;
  undefined1 auStack_c20 [200];
  undefined1 local_b58;
  int local_14;
  
  FUN_016dd1aa(auStack_c20,param_1,200);
  local_c30 = *param_2;
  uStack_c2c = param_2[1];
  uStack_c28 = param_2[2];
  uStack_c24 = param_2[3];
  local_b58 = 0;
  local_14 = 0;
  iVar2 = FUN_016d51b0(&local_14,0x10,0xc10);
  iVar1 = local_14;
  if ((iVar2 != 0) || (local_14 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x10,0xc10);
  }
  FUN_016dd1aa(local_14,&local_c30,0xc10);
  return CONCAT44(&UNK_0185e108,iVar1);
}

