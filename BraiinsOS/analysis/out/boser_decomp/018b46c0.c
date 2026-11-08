// FUN_018b46c0 @ 018b46c0 size=324 calls_out=6 calls_in=2
// strings: 

void FUN_018b46c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char local_2c;
  undefined1 local_2b [3];
  int local_28;
  undefined4 local_24;
  
  FUN_018be778(&local_2c);
  if (local_2c == '\x14') {
    if (((byte)local_2b[0] & 1) == 0) {
      FUN_018c2e04(&local_2c,param_2);
      if (local_2c == '\x14') {
        lVar6 = FUN_018beed0(param_2,local_28);
        iVar2 = (int)((ulonglong)lVar6 >> 0x20);
        if ((int)lVar6 != 0) {
          uVar5 = 0;
          if (lVar6 < 0) {
LAB_018b4760:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar5,iVar2);
          }
          uVar4 = 0;
          if (iVar2 == 0) {
            iVar1 = 1;
            iVar3 = 0;
          }
          else {
            uVar5 = 1;
            iVar1 = FUN_01298504(iVar2,1);
            if (iVar1 == 0) goto LAB_018b4760;
            iVar3 = iVar2;
          }
          FUN_01bed4e2(iVar1,(int)lVar6,iVar2);
          param_1[1] = iVar3;
          param_1[2] = iVar1;
          param_1[3] = iVar2;
          goto LAB_018b47a0;
        }
        uVar5 = 10;
        local_24 = 0;
        local_28 = iVar2;
      }
      else {
        uVar5 = CONCAT31(local_2b,local_2c);
      }
      param_1[1] = uVar5;
      param_1[2] = local_28;
      param_1[3] = local_24;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 3;
    }
  }
  else {
    FUN_01bed4e2((int)param_1 + 7,(uint)&local_2c | 3,9);
    *(undefined1 *)((int)param_1 + 6) = local_2b[1];
    *(undefined1 *)((int)param_1 + 5) = local_2b[0];
    *(char *)(param_1 + 1) = local_2c;
  }
  uVar4 = 1;
LAB_018b47a0:
  *param_1 = uVar4;
  return;
}

