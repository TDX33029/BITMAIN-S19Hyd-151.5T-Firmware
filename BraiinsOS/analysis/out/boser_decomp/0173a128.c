// FUN_0173a128 @ 0173a128 size=92 calls_out=2 calls_in=1
// strings: invalid TLS verification settings

undefined8 FUN_0173a128(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_24 [10];
  
  iVar1 = *param_1;
  if (iVar1 != 0xd) {
    local_24[0] = 0;
    iVar2 = FUN_016f8410(local_24,"invalid TLS verification settings",0x21);
    FUN_0173a660(param_1);
  }
  else {
    iVar2 = param_1[1];
  }
  return CONCAT44(iVar2,(uint)(iVar1 != 0xd));
}

