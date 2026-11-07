// FUN_00fe7e50 @ 00fe7e50 size=532 calls_out=2 calls_in=5
// strings: (?#literal hir should get built successfully | (?#literal hir should get built successfully

void FUN_00fe7e50(undefined4 *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 0x14);
  if (param_3 == uVar5) {
LAB_00fe7e6c:
    *param_1 = 0x12;
    param_1[1] = param_3;
    return;
  }
  iVar4 = *(int *)(param_2 + 0x10);
  if ((*(uint *)(param_2 + 0x38) & 0x10) == 0) {
LAB_00fe7e94:
    if (param_3 < uVar5) {
      if (((*(char *)(iVar4 + param_3) == '(') && (2 < uVar5 - param_3)) &&
         (iVar2 = thunk_FUN_016dd50a("(?#literal hir should get built successfully",
                                     (char *)(iVar4 + param_3),3), iVar2 == 0)) {
        param_3 = param_3 + 3;
        do {
          if (uVar5 <= param_3) goto LAB_00fe802c;
          iVar2 = 2;
          if (*(char *)(iVar4 + param_3) != '\\') {
            if (*(char *)(iVar4 + param_3) == ')') goto LAB_00fe7f00;
            iVar2 = 1;
          }
          param_3 = param_3 + iVar2;
        } while( true );
      }
      goto LAB_00fe7e6c;
    }
    goto LAB_00fe8050;
  }
LAB_00fe7f3c:
  if (uVar5 <= param_3) {
LAB_00fe8050:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar5,&DAT_01881988);
  }
  uVar3 = *(byte *)(iVar4 + param_3) - 9;
  if (0x1f < uVar3) goto LAB_00fe7e6c;
  if ((1 << (uVar3 & 0xff) & 0x800013U) == 0) {
    if (uVar3 == 0x1a) {
      iVar2 = 0;
      do {
        if ((uVar5 - 1) - param_3 == iVar2) {
          *param_1 = 0x12;
          param_1[1] = uVar5;
          return;
        }
        pcVar1 = (char *)(iVar4 + 1 + param_3 + iVar2);
        iVar2 = iVar2 + 1;
      } while (*pcVar1 != '\n');
      param_3 = param_3 + iVar2 + 1;
      goto LAB_00fe7f64;
    }
    if (((uVar3 == 0x1f) && (2 < uVar5 - param_3)) &&
       (iVar2 = thunk_FUN_016dd50a("(?#literal hir should get built successfully",
                                   (byte *)(iVar4 + param_3),3), iVar2 == 0)) {
      param_3 = param_3 + 3;
      do {
        if (uVar5 <= param_3) {
LAB_00fe802c:
          param_1[4] = param_3;
          *param_1 = 1;
          return;
        }
        if (*(char *)(iVar4 + param_3) == '\\') {
          iVar2 = 2;
        }
        else {
          iVar2 = 1;
          if (*(char *)(iVar4 + param_3) == ')') goto code_r0x00fe7fe8;
        }
        param_3 = param_3 + iVar2;
      } while( true );
    }
    goto LAB_00fe7e6c;
  }
  param_3 = param_3 + 1;
LAB_00fe7f64:
  if (param_3 == uVar5) {
LAB_00fe7f0c:
    *param_1 = 0x12;
    param_1[1] = uVar5;
    return;
  }
  goto LAB_00fe7f3c;
LAB_00fe7f00:
  param_3 = param_3 + 1;
  if (param_3 == uVar5) goto LAB_00fe7f0c;
  goto LAB_00fe7e94;
code_r0x00fe7fe8:
  param_3 = param_3 + 1;
  goto LAB_00fe7f64;
}

