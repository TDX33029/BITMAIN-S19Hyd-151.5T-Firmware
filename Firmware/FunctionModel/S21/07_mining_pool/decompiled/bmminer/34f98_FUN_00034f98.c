// FUN_00034f98 @ 00034f98  size=304  callers=1
// program: bmminer


undefined4 FUN_00034f98(void)

{
  int iVar1;
  undefined4 uVar2;
  char local_2008 [12];
  undefined4 local_1ffc;
  char acStack_1ff8 [8180];
  
  iVar1 = access("/nvdata/pool/pool.json",0);
  if (iVar1 == 0) {
    iVar1 = system(
                  "openssl dgst -sha256 -verify /etc/bitmain-adv.pub -signature /nvdata/pool/pool.json.sig /nvdata/pool/pool.json > /dev/null 2>&1"
                  );
    uVar2 = 0;
    if (iVar1 != 0) {
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        builtin_strncpy(local_2008,"verify faile",0xc);
        local_1ffc = CONCAT22(local_1ffc._2_2_,100);
        FUN_0004948c(3,local_2008,0);
        return 1;
      }
      uVar2 = 1;
    }
  }
  else if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
    uVar2 = 0xffffffff;
  }
  else {
    builtin_strncpy(local_2008,"safe pool no",0xc);
    local_1ffc._0_1_ = 't';
    local_1ffc._1_1_ = ' ';
    local_1ffc._2_1_ = 'e';
    local_1ffc._3_1_ = 'x';
    builtin_strncpy(acStack_1ff8,"isted",6);
    FUN_0004948c(3,local_2008,0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

