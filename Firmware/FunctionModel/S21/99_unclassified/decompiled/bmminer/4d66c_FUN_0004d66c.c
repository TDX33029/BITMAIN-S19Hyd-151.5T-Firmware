// FUN_0004d66c @ 0004d66c  size=444  callers=0
// program: bmminer


void FUN_0004d66c(void)

{
  int iVar1;
  int local_2018;
  int local_2014;
  char local_2010 [8192];
  
  local_2014 = 0;
  local_2018 = 0;
  iVar1 = FUN_0004d27c(&local_2018,&local_2014);
  if (iVar1 == 0) {
    if (DAT_000be63c < 4) goto LAB_0004d6b0;
    builtin_strncpy(local_2010,"get_test_status err",0x14);
    FUN_0004948c(3,local_2010,0);
  }
  if (3 < DAT_000be63c) {
    snprintf(local_2010,0x2000,"read tst_index:%d,test_item:%d",local_2018,local_2014);
    FUN_0004948c(3,local_2010,0);
  }
LAB_0004d6b0:
  local_2018 = 5;
  local_2014 = 2;
  iVar1 = FUN_0004d320(5,2);
  if ((iVar1 == 0) && (3 < DAT_000be63c)) {
    builtin_strncpy(local_2010,"set_test_status err",0x14);
    FUN_0004948c(3,local_2010,0);
  }
  local_2018 = 0;
  local_2014 = 0;
  iVar1 = FUN_0004d27c(&local_2018,&local_2014);
  if (iVar1 == 0) {
    if (DAT_000be63c < 4) {
      return;
    }
    builtin_strncpy(local_2010,"get_test_status err after write",0x20);
    FUN_0004948c(3,local_2010,0);
  }
  if (DAT_000be63c < 4) {
    return;
  }
  snprintf(local_2010,0x2000,"read write tst_index:%d,test_item:%d",local_2018,local_2014);
  FUN_0004948c(3,local_2010,0);
  return;
}

