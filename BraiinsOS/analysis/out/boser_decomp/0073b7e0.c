// FUN_0073b7e0 @ 0073b7e0 size=108 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_0073b7e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined1 local_1b4;
  
  local_1fc = *param_2;
  uStack_1f8 = param_2[1];
  uStack_1f4 = param_2[2];
  uStack_1f0 = param_2[3];
  uStack_1ec = param_2[4];
  uStack_1e8 = param_2[5];
  local_208 = *param_3;
  uStack_204 = param_3[1];
  uStack_200 = param_3[2];
  local_1b4 = 0;
  local_1e4 = param_1;
  iVar1 = thunk_FUN_01be5118(0x1f0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1f0);
  }
  FUN_01bed4e2(iVar1,&local_208,0x1f0);
  return CONCAT44(&DAT_01c07f28,iVar1);
}

