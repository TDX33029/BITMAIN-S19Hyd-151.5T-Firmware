// FUN_0100cd18 @ 0100cd18 size=536 calls_out=3 calls_in=1
// strings: 

void FUN_0100cd18(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  short local_3a [9];
  uint local_28;
  char local_24;
  
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar2,uVar2,&DAT_01882234);
  }
  if ((uVar2 == uVar4) || (*(char *)(*param_2 + uVar4) != '[')) {
    *(undefined1 *)(param_1 + 1) = 3;
    *(undefined1 *)param_1 = 4;
    return;
  }
  uVar3 = uVar4 + 1;
  param_2[2] = uVar3;
  FUN_0100cf40(local_3a);
  uVar2 = param_2[2];
  uVar1 = 1;
  if (local_3a[0] == 0) {
    uVar5 = 2;
    if (uVar2 != uVar3) {
      uVar2 = uVar3;
LAB_0100cec8:
      *(undefined1 *)(param_1 + 1) = uVar5;
      *param_1 = uVar2;
      return;
    }
    uVar5 = 1;
    if (((uint)param_2[1] <= uVar3) || ((*(byte *)(*param_2 + uVar3) | 0x20) != 0x76)) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar3;
      return;
    }
    param_2[2] = uVar4 + 2;
    FUN_0100c21c(&local_28,param_2,&DAT_00378df2);
    if (local_24 != '\x03') {
LAB_0100ceec:
      *(char *)(param_1 + 1) = local_24;
      *param_1 = local_28;
      return;
    }
    uVar2 = param_2[2];
    if ((char)local_28 != '\x01') goto LAB_0100cec8;
    uVar4 = param_2[1];
    if (uVar4 < uVar2) goto LAB_0100cf20;
    if ((uVar4 == uVar2) || (*(char *)(*param_2 + uVar2) != '.')) goto LAB_0100cec8;
    param_2[2] = uVar2 + 1;
    FUN_0100c21c(&local_28,param_2,&DAT_00378ef5);
    if (local_24 != '\x03') goto LAB_0100ceec;
    uVar2 = param_2[2];
    uVar1 = 2;
    if ((char)local_28 == '\0') goto LAB_0100cec8;
  }
  uVar4 = param_2[1];
  if (uVar2 <= uVar4) {
    if ((uVar4 == uVar2) || (*(char *)(*param_2 + uVar2) != ']')) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return;
    }
    *(undefined1 *)(param_1 + 1) = 3;
    *(undefined1 *)param_1 = uVar1;
    param_2[2] = uVar2 + 1;
    return;
  }
LAB_0100cf20:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(uVar2,uVar4,uVar4,&DAT_01882234);
}

