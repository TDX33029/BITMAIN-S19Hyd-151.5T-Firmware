// FUN_0119c6fc @ 0119c6fc size=160 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0119c6fc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_18;
  
  local_190 = param_1[10];
  local_18c = param_1[0xb];
  local_f0 = param_1[0xe];
  local_f4 = *(undefined4 *)param_1[0xc];
  local_f8 = *(undefined4 *)param_1[0xd];
  local_188 = *param_2;
  uStack_184 = param_2[1];
  uStack_180 = param_2[2];
  uStack_17c = param_2[3];
  local_1b8 = *param_1;
  uStack_1b4 = param_1[1];
  uStack_1b0 = param_1[2];
  uStack_1ac = param_1[3];
  uStack_1a8 = param_1[4];
  local_1a4 = param_1[5];
  uStack_1a0 = param_1[6];
  uStack_19c = param_1[7];
  uStack_198 = param_1[8];
  uStack_194 = param_1[9];
  local_18 = 0;
  iVar1 = thunk_FUN_01be5118(0x1a8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1a8);
  }
  FUN_01bed4e2(iVar1,&local_1b8,0x1a8);
  return CONCAT44(&UNK_01c218fc,iVar1);
}

