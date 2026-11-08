// FUN_000902c0 @ 000902c0  size=620  callers=1
// program: bmminer


undefined4 FUN_000902c0(int param_1,char *param_2,int param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  char *local_c;
  
  local_c = (char *)(param_1 + 1);
  local_1c = strrchr(local_c,0x22);
  if (local_1c == (char *)0x0) {
    FUN_00095b4c(2,"src/rule.c",0x204,"matching \" not found in conf line[%s]",param_1);
    uVar3 = 0xffffffff;
  }
  else {
    local_10 = (int)local_1c - (int)local_c;
    if (param_3 - 1U < local_10) {
      FUN_00095b4c(2,"src/rule.c",0x209,"file_path too long %ld > %ld",local_10,param_3 + -1);
      uVar3 = 0xffffffff;
    }
    else {
      memcpy(param_2,local_c,local_10);
      iVar1 = FUN_000960c8(param_2,param_3);
      if (iVar1 == 0) {
        pcVar2 = strchr(param_2,0x25);
        if (pcVar2 == (char *)0x0) {
          uVar3 = 0;
        }
        else {
          local_14 = FUN_000946a4(FUN_00093400);
          if (param_4 == (int *)0x0) {
            FUN_00095b4c(2,"src/rule.c",0x21b,"zc_arraylist_new fail");
            uVar3 = 0xffffffff;
          }
          else {
            local_c = param_2;
            while (*local_c != '\0') {
              local_18 = FUN_00093470(local_c,&local_1c,param_5);
              if (local_18 == 0) {
                FUN_00095b4c(2,"src/rule.c",0x222,"zlog_spec_new fail");
LAB_000904f4:
                if (local_14 != 0) {
                  FUN_000947ac(local_14);
                }
                if (local_18 != 0) {
                  FUN_00093400(local_18);
                }
                return 0xffffffff;
              }
              iVar1 = FUN_00094aa4(local_14,local_18);
              if (iVar1 != 0) {
                FUN_00095b4c(2,"src/rule.c",0x227,"zc_arraylist_add fail");
                goto LAB_000904f4;
              }
              local_c = local_1c;
            }
            *param_4 = local_14;
            uVar3 = 0;
          }
        }
      }
      else {
        FUN_00095b4c(2,"src/rule.c",0x210,"zc_str_replace_env fail");
        uVar3 = 0xffffffff;
      }
    }
  }
  return uVar3;
}

