// FUN_012c3bfc @ 012c3bfc size=748 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_012c3bfc(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 unaff_r4;
  int iVar4;
  bool bVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_012c3af8(&local_24,param_1);
  if ((char)local_24 != '\x01') {
    cVar1 = local_24._2_1_;
    if (local_24._1_1_ == '\0') {
      cVar1 = '\0';
    }
    if (cVar1 == '0') {
      FUN_012c39c8(&local_24,param_1);
      if ((char)local_24 == '\0') {
        if ((local_24._1_1_ == '\x01') && ((local_24 >> 0x10 & 0xff) - 0x30 < 10))
        goto LAB_012c3dc8;
LAB_012c3c7c:
        FUN_012c39c8(&local_24,param_1);
        if ((char)local_24 == '\0') {
          cVar1 = local_24._2_1_;
          if (local_24._1_1_ == '\0') {
            cVar1 = '\0';
          }
          if (cVar1 == 'e' || cVar1 == 'E') {
LAB_012c3cb4:
            iVar4 = param_1 + 0xc;
            FUN_012c6160(iVar4);
            FUN_012c39c8(&local_1c,param_1);
            if ((char)local_1c != '\x01') {
              cVar1 = local_1c._2_1_;
              if (local_1c._1_1_ == '\0') {
                cVar1 = '\0';
              }
              if (cVar1 == '+' || cVar1 == '-') {
                FUN_012c6160(iVar4);
              }
              FUN_012c3af8(&local_1c,param_1);
              if ((char)local_1c == '\0') {
                if ((local_1c._1_1_ != '\x01') || (9 < (local_1c >> 0x10 & 0xff) - 0x30)) {
                  local_1c = 0xd;
                  uVar2 = FUN_01966fbc(&local_1c,*(undefined4 *)(param_1 + 0x30),
                                       *(undefined4 *)(param_1 + 0x34));
                  return uVar2;
                }
                while( true ) {
                  FUN_012c39c8(&local_1c,param_1);
                  if ((char)local_1c == '\x01') break;
                  if (local_1c._1_1_ != '\x01') {
                    return 0;
                  }
                  if (9 < (local_1c >> 0x10 & 0xff) - 0x30) {
                    return 0;
                  }
                  FUN_012c6160(iVar4);
                }
              }
            }
            return unaff_r4;
          }
          if (cVar1 != '.') {
            return 0;
          }
          FUN_012c6160(param_1 + 0xc);
          bVar5 = false;
          while( true ) {
            FUN_012c39c8(&local_24,param_1);
            if ((char)local_24 == '\x01') break;
            if ((local_24._1_1_ != '\x01') || (9 < (local_24 >> 0x10 & 0xff) - 0x30)) {
              if (!bVar5) goto LAB_012c3dc8;
              FUN_012c39c8(&local_24,param_1);
              if ((char)local_24 == '\x01') {
                return local_20;
              }
              bVar3 = 0x20;
              if (local_24._1_1_ != '\0') {
                bVar3 = local_24._2_1_ | 0x20;
              }
              if (bVar3 != 0x65) {
                return 0;
              }
              goto LAB_012c3cb4;
            }
            FUN_012c6160(param_1 + 0xc);
            bVar5 = true;
          }
        }
      }
    }
    else {
      if (8 < (byte)(cVar1 - 0x31U)) {
LAB_012c3dc8:
        local_24 = 0xd;
        uVar2 = FUN_01966fbc(&local_24,*(undefined4 *)(param_1 + 0x30),
                             *(undefined4 *)(param_1 + 0x34));
        return uVar2;
      }
      while( true ) {
        FUN_012c39c8(&local_24,param_1);
        if ((char)local_24 == '\x01') break;
        if ((local_24._1_1_ != '\x01') || (9 < (local_24 >> 0x10 & 0xff) - 0x30)) goto LAB_012c3c7c;
        FUN_012c6160(param_1 + 0xc);
      }
    }
  }
  return local_20;
}

