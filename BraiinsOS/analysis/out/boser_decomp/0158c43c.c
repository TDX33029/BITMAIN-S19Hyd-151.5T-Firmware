// FUN_0158c43c @ 0158c43c size=560 calls_out=6 calls_in=2
// strings: 

void FUN_0158c43c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char local_40;
  char local_3f;
  char local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  FUN_0158c684(&local_40);
  if (local_40 != '\x01') {
    if (local_3f == '\x01') {
      if (local_3e == '0') {
        FUN_0158c30c(&local_38,param_2);
        if ((char)local_38 != '\0') {
          local_3c = local_34;
          goto LAB_0158c468;
        }
        if ((local_38._1_1_ != '\x01') || (9 < (local_38 >> 0x10 & 0xff) - 0x30)) goto LAB_0158c5e0;
      }
      else if ((byte)(local_3e - 0x31U) < 9) {
        uVar1 = (ulonglong)(byte)(local_3e - 0x30);
        while( true ) {
          uVar5 = (uint)(uVar1 >> 0x20);
          FUN_0158c30c(&local_38,param_2);
          if ((char)local_38 == '\x01') {
            *param_1 = 3;
            param_1[1] = 0;
            param_1[2] = local_34;
            return;
          }
          uVar2 = 0xffffffd0;
          if (local_38._1_1_ != '\0') {
            uVar2 = (local_38 >> 0x10 & 0xff) - 0x30;
          }
          if (9 < (uVar2 & 0xff)) break;
          if ((0x19999998 < uVar5 && (uint)((uint)uVar1 < 0x99999999) <= 0x19999999 - uVar5) &&
             (((uint)uVar1 != 0x99999999 || (int)((uVar1 ^ 0x1999999999999999) >> 0x20) != 0 ||
              (5 < (uVar2 & 0xff))))) {
            FUN_0158c8ac(&local_38,param_2,param_3);
            if (local_38 == 1) {
              param_1[2] = local_34;
              uVar3 = 3;
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_1 + 2) = local_30;
            }
            *param_1 = uVar3;
            param_1[1] = 0;
            return;
          }
          FUN_0157653c(param_2 + 0xc);
          uVar1 = (uVar1 & 0xffffffff) * 10 + (CONCAT44(uVar5 * 10,uVar2) & 0xffffffff000000ff);
        }
LAB_0158c5e0:
        FUN_0158c788(param_1,param_2,param_3);
        return;
      }
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      uVar4 = *(undefined4 *)(param_2 + 0x20);
      local_38 = 0xd;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      uVar4 = *(undefined4 *)(param_2 + 0x20);
      local_38 = 5;
    }
    local_3c = FUN_01966fbc(&local_38,uVar3,uVar4);
  }
LAB_0158c468:
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = local_3c;
  return;
}

