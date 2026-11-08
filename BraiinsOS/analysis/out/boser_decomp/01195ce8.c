// FUN_01195ce8 @ 01195ce8 size=152 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01195ce8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_1a0;
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
  
  local_190 = param_1[6];
  local_18c = param_1[7];
  local_f0 = param_1[8];
  local_f4 = *(undefined4 *)param_1[4];
  local_f8 = *(undefined4 *)param_1[5];
  local_188 = *param_2;
  uStack_184 = param_2[1];
  uStack_180 = param_2[2];
  uStack_17c = param_2[3];
  local_1a0 = *param_1;
  uStack_19c = param_1[1];
  uStack_198 = param_1[2];
  uStack_194 = param_1[3];
  local_18 = 0;
  iVar1 = thunk_FUN_01be5118(400);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,400);
  }
  FUN_01bed4e2(iVar1,&local_1a0,400);
  return CONCAT44(&UNK_01c2189c,iVar1);
}

