// FUN_014c9d04 @ 014c9d04 size=344 calls_out=5 calls_in=2
// strings: 

void FUN_014c9d04(char *param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_48;
  int local_44;
  int local_40;
  
  if (param_5 != 0) {
    iVar3 = param_2 + 0x10;
    uVar4 = 0;
    do {
      if (param_5 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar4,param_5,param_5,&DAT_018a60c8);
      }
      local_40 = param_5 - uVar4;
      local_44 = param_4 + uVar4;
      local_48 = 0;
      iVar2 = FUN_01526e04(iVar3,&local_48,param_2 + 0x2c0);
      cVar1 = *(char *)(param_2 + 0x26b);
      *(undefined1 *)(param_2 + 0x26b) = 0;
      if (cVar1 == '\x01') {
        if (*(int *)(param_2 + 0x280) == -0x7fffffd7) {
          (**(code **)(*(int *)(param_2 + 0x288) + 0x18))
                    (&local_48,*(undefined4 *)(param_2 + 0x284),iVar3);
        }
        else {
          FUN_014d7960(&local_48);
        }
        if (local_48 != -0x7fffffd7) {
          FUN_01465b84(&local_48);
        }
      }
      uVar4 = iVar2 + uVar4;
LAB_014c9dc8:
      if (*(int *)(param_2 + 0x218) != 0) {
        FUN_014bd320(param_1,param_2,iVar3,param_3);
        if (*param_1 == '\x04') goto code_r0x014c9df4;
        if (*param_1 != '\x05') {
          return;
        }
        goto LAB_014c9e28;
      }
    } while (uVar4 != param_5);
  }
  *(uint *)(param_1 + 4) = param_5;
  cVar1 = '\x04';
LAB_014c9e38:
  *param_1 = cVar1;
  return;
code_r0x014c9df4:
  if (*(int *)(param_1 + 4) == 0) {
LAB_014c9e28:
    if (uVar4 == 0) {
      cVar1 = '\x05';
    }
    else {
      *(uint *)(param_1 + 4) = uVar4;
      cVar1 = '\x04';
    }
    goto LAB_014c9e38;
  }
  goto LAB_014c9dc8;
}

