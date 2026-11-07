// FUN_01734718 @ 01734718 size=268 calls_out=4 calls_in=1
// strings: 

void FUN_01734718(char *param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  if (param_5 != 0) {
    uVar3 = 0;
    do {
      if (param_5 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar3,param_5,param_5,&DAT_01d2079c);
      }
      local_2c = param_5 - uVar3;
      local_30 = param_4 + uVar3;
      local_34 = 0;
      iVar2 = FUN_018f2b8c(param_2,&local_34,param_2 + 0x2b0);
      FUN_0191d3f0(param_2);
      uVar3 = iVar2 + uVar3;
LAB_01734788:
      if (*(int *)(param_2 + 0x208) != 0) {
        FUN_016f6e78(param_1,param_2 + 0x2d0,param_2,param_3);
        if (*param_1 == '\x04') goto code_r0x017347b4;
        if (*param_1 != '\x05') {
          return;
        }
        goto LAB_017347e8;
      }
    } while (uVar3 != param_5);
  }
  *(uint *)(param_1 + 4) = param_5;
LAB_017347f4:
  cVar1 = '\x04';
LAB_017347f8:
  *param_1 = cVar1;
  return;
code_r0x017347b4:
  if (*(int *)(param_1 + 4) == 0) {
LAB_017347e8:
    if (uVar3 != 0) {
      *(uint *)(param_1 + 4) = uVar3;
      goto LAB_017347f4;
    }
    cVar1 = '\x05';
    goto LAB_017347f8;
  }
  goto LAB_01734788;
}

