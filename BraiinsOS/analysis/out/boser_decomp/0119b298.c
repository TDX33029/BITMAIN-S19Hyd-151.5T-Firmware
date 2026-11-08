// FUN_0119b298 @ 0119b298 size=168 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0119b298(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_4c0 [808];
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_20;
  
  local_198 = *(undefined4 *)(param_1 + 0x328);
  local_194 = *(undefined4 *)(param_1 + 0x32c);
  local_f8 = *(undefined4 *)(param_1 + 0x338);
  local_fc = **(undefined4 **)(param_1 + 0x330);
  local_100 = **(undefined4 **)(param_1 + 0x334);
  local_190 = *param_2;
  uStack_18c = param_2[1];
  uStack_188 = param_2[2];
  uStack_184 = param_2[3];
  FUN_01bed4e2(auStack_4c0,param_1,0x328);
  local_20 = 0;
  iVar1 = thunk_FUN_01be5118(0x4a8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x4a8);
  }
  FUN_01bed4e2(iVar1,auStack_4c0,0x4a8);
  return CONCAT44(&UNK_01c2192c,iVar1);
}

