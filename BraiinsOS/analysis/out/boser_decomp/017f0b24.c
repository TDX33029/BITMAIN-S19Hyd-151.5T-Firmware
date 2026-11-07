// FUN_017f0b24 @ 017f0b24 size=328 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_017f0b24(byte *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_1 == 3) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    (**(code **)(puVar1[1] + 0x1c))(&local_38,*puVar1);
    if ((local_38 == (undefined4 *)0xb5f6b379 && iStack_30 == 0x61c54272) &&
        (local_34 == -0x6302a95d && iStack_2c == 0x4639e214)) {
      if (*param_1 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_0050c3be,0x1e,&DAT_01d1cee4);
      }
      puVar3 = (undefined4 *)*puVar1;
      iVar4 = puVar1[1];
      thunk_FUN_01be4678(puVar1);
      (**(code **)(iVar4 + 0x1c))(&local_38,puVar3);
      if ((local_38 != (undefined4 *)0xb5f6b379 || iStack_30 != 0x61c54272) ||
          (local_34 != -0x6302a95d || iStack_2c != 0x4639e214)) {
        local_38 = puVar3;
        local_34 = iVar4;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_0050c3dc,0x17,&local_38,&DAT_01d1cce8,&DAT_01d1cef4);
      }
      uVar2 = *puVar3;
      thunk_FUN_01be4678(puVar3);
      return uVar2;
    }
  }
  local_38 = *(undefined4 **)param_1;
  local_34 = *(int *)(param_1 + 4);
  uVar2 = FUN_017f0948(5,&local_38);
  return uVar2;
}

