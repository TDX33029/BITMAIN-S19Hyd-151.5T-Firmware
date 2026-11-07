// FUN_01483258 @ 01483258 size=344 calls_out=5 calls_in=0
// strings: 

void FUN_01483258(char *param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_48;
  int local_44;
  int local_40;
  
  if (param_5 != 0) {
    uVar3 = 0;
    do {
      if (param_5 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar3,param_5,param_5,&DAT_018a60c8);
      }
      local_40 = param_5 - uVar3;
      local_44 = param_4 + uVar3;
      local_48 = 0;
      iVar2 = FUN_01526e04(param_2,&local_48,param_2 + 0x2b0);
      cVar1 = *(char *)(param_2 + 0x25b);
      *(undefined1 *)(param_2 + 0x25b) = 0;
      if (cVar1 == '\x01') {
        if (*(int *)(param_2 + 0x270) == -0x7fffffd7) {
          (**(code **)(*(int *)(param_2 + 0x278) + 0x18))
                    (&local_48,*(undefined4 *)(param_2 + 0x274),param_2);
        }
        else {
          FUN_014d7960(&local_48);
        }
        if (local_48 != -0x7fffffd7) {
          FUN_01465b84(&local_48);
        }
      }
      uVar3 = iVar2 + uVar3;
LAB_0148331c:
      if (*(int *)(param_2 + 0x208) != 0) {
        FUN_014bb9e8(param_1,param_2 + 0x2d0,param_2,param_3);
        if (*param_1 == '\x04') goto code_r0x01483348;
        if (*param_1 != '\x05') {
          return;
        }
        goto LAB_0148337c;
      }
    } while (uVar3 != param_5);
  }
  *(uint *)(param_1 + 4) = param_5;
  cVar1 = '\x04';
LAB_0148338c:
  *param_1 = cVar1;
  return;
code_r0x01483348:
  if (*(int *)(param_1 + 4) == 0) {
LAB_0148337c:
    if (uVar3 == 0) {
      cVar1 = '\x05';
    }
    else {
      *(uint *)(param_1 + 4) = uVar3;
      cVar1 = '\x04';
    }
    goto LAB_0148338c;
  }
  goto LAB_0148331c;
}

