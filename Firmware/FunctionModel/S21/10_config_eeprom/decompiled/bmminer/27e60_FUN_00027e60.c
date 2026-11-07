// FUN_00027e60 @ 00027e60  size=188  callers=1
// program: bmminer


int FUN_00027e60(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_241c [8];
  int aiStack_2414 [257];
  char acStack_2010 [8196];
  
  memset(auStack_241c,0,0x40c);
  iVar1 = FUN_0001d4fc(param_1,auStack_241c);
  if (iVar1 == 0) {
    return aiStack_2414[param_2];
  }
  if (DAT_000be63c < 4) {
    return DAT_008c7040;
  }
  snprintf(acStack_2010,0x2000,"can not find sweep in eeprom,test return %d",DAT_008c7040);
  FUN_0004948c(3,acStack_2010,0);
  return DAT_008c7040;
}

