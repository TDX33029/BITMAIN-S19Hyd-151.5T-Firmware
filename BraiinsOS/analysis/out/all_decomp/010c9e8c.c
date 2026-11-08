// FUN_010c9e8c @ 010c9e8c size=240 calls_out=2 calls_in=0
// strings: 

void FUN_010c9e8c(undefined4 *param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  int local_1c [2];
  short local_14;
  
  if ((*(int *)(param_2 + 0x10) != 0) &&
     (FUN_010a6bb0(local_1c,*(undefined4 *)(param_2 + 0xc)), local_1c[0] != 0)) {
    if (*param_2 != '\0') {
      if (*param_2 == '\x01') {
        if (param_2[1] != '\0') {
          puVar1 = &DAT_0041860c;
LAB_010c9f08:
          iVar2 = thunk_FUN_016dd50a(puVar1,&DAT_0041860c,5);
          goto joined_r0x010c9f5c;
        }
      }
      else {
        puVar1 = *(undefined **)(*(int *)(param_2 + 4) + 4);
        iVar2 = *(int *)(*(int *)(param_2 + 4) + 8);
        if (iVar2 == 3) {
          iVar2 = thunk_FUN_016dd50a(puVar1,&DAT_00418611,3);
joined_r0x010c9f5c:
          if (iVar2 == 0) {
            if (local_14 == 0x1bb) goto LAB_010c9f6c;
            goto LAB_010c9f28;
          }
        }
        else if (iVar2 == 5) goto LAB_010c9f08;
      }
    }
    if (local_14 == 0x50) goto LAB_010c9f6c;
  }
LAB_010c9f28:
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_010a6bb0(param_1,*(undefined4 *)(param_2 + 0xc));
    return;
  }
LAB_010c9f6c:
  *param_1 = 0;
  return;
}

