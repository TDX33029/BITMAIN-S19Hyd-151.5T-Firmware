// FUN_0070e52c @ 0070e52c size=172 calls_out=4 calls_in=3
// strings: failed to parse header value

void FUN_0070e52c(undefined4 param_1)

{
  int iVar1;
  undefined2 local_70 [2];
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_1c;
  
  local_58 = 0;
  local_5c = 1;
  local_60 = 0;
  iVar1 = FUN_005fdd28(&local_60,"failed to parse header value",0x1c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,local_70,&DAT_01c0713c,&DAT_01d30334);
  }
  local_6c = local_60;
  uStack_68 = local_5c;
  uStack_64 = local_58;
  local_70[0] = 500;
  FUN_007167d4(&local_60);
  local_1c = 500;
  FUN_01bed4e2(param_1,&local_60,0x50);
  return;
}

