// FUN_018a89a4 @ 018a89a4 size=376 calls_out=3 calls_in=1
// strings: 

void FUN_018a89a4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char unaff_r6;
  undefined8 uVar5;
  undefined8 uStack_3c;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar5 = FUN_018beed0(param_2,1);
  if (((undefined1 *)uVar5 == (undefined1 *)0x0) || ((int)((ulonglong)uVar5 >> 0x20) != 1)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    uVar5 = FUN_018beed0(param_2,*(undefined1 *)uVar5);
    if ((int)uVar5 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
    }
    else {
      iVar4 = 1;
      local_34 = 0;
      local_28 = 0;
      local_2c = 1;
      local_30 = 0;
      if ((int)((ulonglong)uVar5 >> 0x20) != 0) {
        cVar3 = '\0';
        do {
          iVar1 = local_28;
          uStack_3c = uVar5;
          uVar5 = FUN_018beed0(&uStack_3c,1);
          if (((char *)uVar5 == (char *)0x0) || ((int)((ulonglong)uVar5 >> 0x20) != 1)) {
            *(undefined1 *)(param_1 + 1) = 0xb;
            param_1[2] = &DAT_0051ddac;
            param_1[3] = 0x12;
            *param_1 = 1;
            *(char *)((int)param_1 + 6) = cVar3;
            *(char *)((int)param_1 + 5) = unaff_r6;
            FUN_0134aee0(local_30,iVar4,1,2);
            return;
          }
          cVar3 = *(char *)uVar5;
          unaff_r6 = cVar3;
          if (cVar3 != '\x01') {
            unaff_r6 = '\x02';
          }
          if (cVar3 == '\0') {
            unaff_r6 = cVar3;
          }
          uVar5 = uStack_3c;
          if (iVar1 == local_30) {
            FUN_016f5378(&local_30);
            iVar4 = local_2c;
            uVar5 = uStack_3c;
          }
          uStack_3c._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
          pcVar2 = (char *)(iVar4 + iVar1 * 2);
          *pcVar2 = unaff_r6;
          local_28 = iVar1 + 1;
          pcVar2[1] = cVar3;
        } while (local_34 < uStack_3c._4_4_);
      }
      param_1[1] = local_30;
      param_1[2] = local_2c;
      param_1[3] = local_28;
      *param_1 = 0;
    }
  }
  return;
}

