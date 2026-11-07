// FUN_010ad96c @ 010ad96c size=272 calls_out=4 calls_in=0
// strings: 

void FUN_010ad96c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_2d8 [136];
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  
  uVar3 = *(undefined4 *)(param_2 + 0x88);
  uVar4 = *(undefined4 *)(param_2 + 0x8c);
  FUN_01bed4e2(auStack_2d8,param_2,0x88);
  local_250 = uVar3;
  local_24c = uVar4;
  FUN_015e8ad4(&local_230,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_015e8ad4(&local_220,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  local_248 = local_230;
  uStack_244 = uStack_22c;
  uStack_240 = uStack_228;
  local_23c = local_220;
  uStack_238 = uStack_21c;
  uStack_234 = uStack_218;
  FUN_01bed4e2(&local_220,param_2,0x88);
  local_198 = local_248;
  uStack_194 = uStack_244;
  uStack_190 = uStack_240;
  uStack_18c = local_23c;
  uStack_188 = uStack_238;
  uStack_184 = uStack_234;
  local_178 = 0;
  local_180 = uVar3;
  local_17c = uVar4;
  iVar1 = thunk_FUN_01be5118(0x200);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x200);
  }
  FUN_01bed4e2(iVar1,&local_220,0x200);
  piVar2 = (int *)thunk_FUN_01be5118(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *piVar2 = iVar1;
  piVar2[1] = (int)&DAT_01c1c988;
  piVar2[2] = (int)&LAB_00feab84;
  return;
}

