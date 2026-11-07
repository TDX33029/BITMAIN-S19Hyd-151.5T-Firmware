// FUN_0158f7f4 @ 0158f7f4 size=348 calls_out=3 calls_in=1
// strings: 

void FUN_0158f7f4(undefined2 *param_1,int *param_2)

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
  FUN_0158c2a4(&local_24,iVar5);
  if (local_24 != '\x01') {
    if (local_23 == '\x01') {
      if (local_22 == '}') {
        uVar2 = 0;
LAB_0158f874:
        *param_1 = uVar2;
        return;
      }
      if ((char)param_2[1] == '\0') {
        if (local_22 == ',') {
          FUN_0157653c(iVar5 + 0xc);
          FUN_0158c2a4(&local_24,iVar5);
          if (local_24 == '\0') {
            if (local_23 == '\x01') {
              if (local_22 == '\"') {
                *(undefined1 *)((int)param_1 + 1) = 1;
                uVar1 = 0;
                goto LAB_0158f8d8;
              }
              uVar3 = *(undefined4 *)(iVar5 + 0x1c);
              uVar4 = *(undefined4 *)(iVar5 + 0x20);
              if (local_22 == '}') {
                local_1c[0] = 0x15;
              }
              else {
                local_1c[0] = 0x11;
              }
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
LAB_0158f8d8:
          *(undefined1 *)param_1 = uVar1;
          return;
        }
        uVar3 = *(undefined4 *)(iVar5 + 0x1c);
        uVar4 = *(undefined4 *)(iVar5 + 0x20);
        local_1c[0] = 8;
      }
      else {
        *(undefined1 *)(param_2 + 1) = 0;
        if (local_22 == '\"') {
          uVar2 = 0x100;
          goto LAB_0158f874;
        }
        uVar3 = *(undefined4 *)(iVar5 + 0x1c);
        uVar4 = *(undefined4 *)(iVar5 + 0x20);
        local_1c[0] = 0x11;
      }
    }
    else {
      uVar3 = *(undefined4 *)(iVar5 + 0x1c);
      uVar4 = *(undefined4 *)(iVar5 + 0x20);
      local_1c[0] = 3;
    }
    local_20 = FUN_01966fbc(local_1c,uVar3,uVar4);
  }
  *(undefined4 *)(param_1 + 2) = local_20;
  *(undefined1 *)param_1 = 1;
  return;
}

