// FUN_0132dba0 @ 0132dba0 size=368 calls_out=2 calls_in=5
// strings: (?#literal hir should get built successfully

void FUN_0132dba0(undefined4 *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_2 + 0x14);
  if (param_3 != uVar7) {
    iVar6 = *(int *)(param_2 + 0x10);
    uVar5 = *(uint *)(param_2 + 0x38);
    do {
      if (uVar7 <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_3,uVar7,&DAT_01ce633c);
      }
      bVar2 = *(byte *)(iVar6 + param_3);
      if (bVar2 < 0x20) {
        if ((bVar2 != 9 && bVar2 != 10) && (bVar2 != 0xd)) goto LAB_0132dbbc;
LAB_0132dc7c:
        if ((uVar5 & 0x10) == 0) goto LAB_0132dbbc;
      }
      else {
        if (bVar2 == 0x20) goto LAB_0132dc7c;
        if (bVar2 != 0x23) {
          if (((bVar2 == 0x28) && (2 < uVar7 - param_3)) &&
             (iVar3 = thunk_FUN_01bed842("(?#literal hir should get built successfully",
                                         (byte *)(iVar6 + param_3),3), iVar3 == 0)) {
            param_3 = param_3 + 3;
            do {
              if (uVar7 <= param_3) {
                param_1[4] = param_3;
                *param_1 = 1;
                return;
              }
              if (*(char *)(iVar6 + param_3) == '\\') {
                iVar3 = 2;
              }
              else {
                iVar3 = 1;
                if (*(char *)(iVar6 + param_3) == ')') goto LAB_0132dc88;
              }
              param_3 = param_3 + iVar3;
            } while( true );
          }
          goto LAB_0132dbbc;
        }
        if ((uVar5 & 0x10) == 0) goto LAB_0132dbbc;
        iVar3 = 0;
        cVar4 = '#';
        while (cVar4 != '\n') {
          if ((uVar7 - 1) - param_3 == iVar3) {
            *param_1 = 0x12;
            param_1[1] = uVar7;
            return;
          }
          pcVar1 = (char *)(iVar6 + 1 + param_3 + iVar3);
          iVar3 = iVar3 + 1;
          cVar4 = *pcVar1;
        }
        param_3 = param_3 + iVar3;
      }
LAB_0132dc88:
      param_3 = param_3 + 1;
    } while (param_3 != uVar7);
    param_3 = uVar7;
  }
LAB_0132dbbc:
  *param_1 = 0x12;
  param_1[1] = param_3;
  return;
}

