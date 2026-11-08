// FUN_00679a0c @ 00679a0c size=320 calls_out=3 calls_in=10
// strings: 

void FUN_00679a0c(undefined2 *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char local_24;
  char local_23;
  char local_22;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  iVar5 = *param_2;
  FUN_00677900(&local_24,iVar5);
  if (local_24 != '\x01') {
    if (local_23 == '\x01') {
      if (local_22 == ']') {
        uVar2 = 0;
LAB_00679a84:
        *param_1 = uVar2;
        return;
      }
      if ((char)param_2[1] != '\0') {
        *(undefined1 *)(param_2 + 1) = 0;
        uVar2 = 0x100;
        goto LAB_00679a84;
      }
      if (local_22 == ',') {
        FUN_0157653c(iVar5 + 0xc);
        FUN_00677900(&local_24,iVar5);
        if (local_24 == '\0') {
          if (local_23 == '\x01') {
            if (local_22 != ']') {
              *(undefined1 *)((int)param_1 + 1) = 1;
              uVar1 = 0;
              goto LAB_00679ae8;
            }
            uVar3 = *(undefined4 *)(iVar5 + 0x1c);
            uVar4 = *(undefined4 *)(iVar5 + 0x20);
            local_1c[0] = 0x15;
          }
          else {
            uVar3 = *(undefined4 *)(iVar5 + 0x1c);
            uVar4 = *(undefined4 *)(iVar5 + 0x20);
            local_1c[0] = 5;
          }
          local_20 = FUN_01966fbc(local_1c,uVar3,uVar4);
        }
        *(undefined4 *)(param_1 + 2) = local_20;
        uVar1 = 1;
LAB_00679ae8:
        *(undefined1 *)param_1 = uVar1;
        return;
      }
      uVar3 = *(undefined4 *)(iVar5 + 0x1c);
      uVar4 = *(undefined4 *)(iVar5 + 0x20);
      local_1c[0] = 7;
    }
    else {
      uVar3 = *(undefined4 *)(iVar5 + 0x1c);
      uVar4 = *(undefined4 *)(iVar5 + 0x20);
      local_1c[0] = 2;
    }
    local_20 = FUN_01966fbc(local_1c,uVar3,uVar4);
  }
  *(undefined4 *)(param_1 + 2) = local_20;
  *(undefined1 *)param_1 = 1;
  return;
}

