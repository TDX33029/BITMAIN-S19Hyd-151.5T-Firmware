// FUN_01be135c @ 01be135c size=74 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01be135c(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x4d) != '\0') {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      FUN_01bdfb5c(param_1 + 0x50);
      cVar1 = *(char *)(param_1 + 0x4e);
      goto joined_r0x01be1390;
    }
    FUN_01bdfb64();
  }
  cVar1 = *(char *)(param_1 + 0x4e);
joined_r0x01be1390:
  if (cVar1 != '\0') {
    FUN_01bdfb6c(param_1 + 0xd8);
  }
  return *(undefined8 *)(param_1 + 8);
}

