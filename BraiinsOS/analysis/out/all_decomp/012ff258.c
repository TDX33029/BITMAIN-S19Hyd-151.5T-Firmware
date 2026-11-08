// FUN_012ff258 @ 012ff258 size=748 calls_out=7 calls_in=7
// strings: 

void FUN_012ff258(int *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_25;
  undefined4 local_24;
  
  cVar1 = *(char *)(param_2 + 0x1c);
  if (cVar1 != '\x03') {
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_25 = 8;
      local_24 = 0;
      FUN_01328914(&local_38,param_3,&local_25,1);
      if (local_38 != 4) goto LAB_012ff50c;
    }
    else {
      if (uVar3 < uVar2) goto LAB_012ff520;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 8;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_38,param_3,cVar1,0);
    if (local_38 != 4) goto LAB_012ff50c;
  }
  if ((*(byte *)(param_2 + 0x18) == 2) ||
     (FUN_01329168(&local_38,param_3,2,*(byte *)(param_2 + 0x18) & 1), local_38 == 4)) {
    cVar1 = *(char *)(param_2 + 0x1d);
    if (cVar1 != '\x03') {
      uVar3 = *(uint *)(param_3 + 0x18);
      uVar2 = *(uint *)(param_3 + 0x1c);
      if (uVar3 - uVar2 < 5) {
        local_25 = 0x30;
        local_24 = 0;
        FUN_01328914(&local_38,param_3,&local_25,1);
        if (local_38 != 4) goto LAB_012ff50c;
      }
      else {
        if (uVar3 < uVar2) {
LAB_012ff520:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar2,uVar3,uVar3,&DAT_0188fa90);
        }
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x30;
        *(uint *)(param_3 + 0x1c) = uVar2 + 1;
      }
      FUN_0132901c(&local_38,param_3,cVar1,0);
      if (local_38 != 4) goto LAB_012ff50c;
    }
    if ((((*(byte *)(param_2 + 0x19) == 2) ||
         (FUN_01329168(&local_38,param_3,5,*(byte *)(param_2 + 0x19) & 1), local_38 == 4)) &&
        ((*(byte *)(param_2 + 0x1a) == 2 ||
         (FUN_01329168(&local_38,param_3,3,*(byte *)(param_2 + 0x1a) & 1), local_38 == 4)))) &&
       ((*(byte *)(param_2 + 0x1b) == 2 ||
        (FUN_01329168(&local_38,param_3,10,*(byte *)(param_2 + 0x1b) & 1), local_38 == 4)))) {
      uVar2 = *(uint *)(param_2 + 0xc);
      if (*(uint *)(param_2 + 8) < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar2,*(uint *)(param_2 + 8),&DAT_01890988);
      }
      if (uVar2 != 0) {
        iVar5 = *(int *)(param_2 + 4);
        iVar4 = uVar2 * 0x78;
        do {
          FUN_01328ef8(&local_38,param_3,0x1f3a);
          if (((local_38 != 4) ||
              (FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar5 + 0x74)), local_38 != 4)) ||
             (FUN_012fb034(&local_38,iVar5,param_3), local_38 != 4)) goto LAB_012ff50c;
          iVar5 = iVar5 + 0x78;
          iVar4 = iVar4 + -0x78;
        } while (iVar4 != 0);
      }
      FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0x10));
      if (local_38 == 4) {
        *param_1 = 4;
        return;
      }
    }
  }
LAB_012ff50c:
  param_1[1] = local_34;
  *param_1 = local_38;
  param_1[2] = local_30;
  return;
}

