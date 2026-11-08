// FUN_011bd868 @ 011bd868 size=552 calls_out=3 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x011bd8a4) */
/* WARNING: Removing unreachable block (ram,0x011bd9a4) */
/* WARNING: Removing unreachable block (ram,0x011bd8d4) */

void FUN_011bd868(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = *(undefined4 *)(param_1 + 4);
  if (*(char *)(param_2 + 0x28) == '\0') {
    uVar7 = *(undefined1 *)(param_1 + 1);
    uVar5 = (uint)*(byte *)(param_1 + 2);
    FUN_011ef738(&local_30);
    if ((local_30 & 0xff) == 5) {
      bVar3 = false;
    }
    else {
      if ((local_30 & 0xff) != 4) {
        local_38 = FUN_0157c4a0(local_30,local_2c);
        bVar2 = true;
        goto LAB_011bda58;
      }
      uVar5 = (uint)local_30._1_1_;
      bVar3 = true;
      *(byte *)(param_2 + 0x29) = local_30._1_1_;
      *(undefined1 *)(param_2 + 0x28) = 1;
    }
  }
  else {
    uVar5 = (uint)*(byte *)(param_2 + 0x29);
    bVar3 = true;
  }
  bVar2 = false;
  uVar7 = 0;
  if (bVar3) {
    uVar7 = 1;
    if ((uVar5 - 9 < 0x18) && ((1 << (uVar5 - 9 & 0xff) & 0x800013U) != 0)) {
      iVar4 = *(int *)(param_2 + 0xc);
      uVar7 = *(undefined1 *)(param_2 + 0x29);
      cVar1 = *(char *)(param_2 + 0x28);
      *(undefined1 *)(param_2 + 0x28) = 0;
      do {
        if ((cVar1 == '\x01') && (iVar4 != -0x80000000)) {
          iVar6 = *(int *)(param_2 + 0x14);
          if (iVar6 == iVar4) {
            FUN_006029c0(param_2 + 0xc);
          }
          *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar6) = uVar7;
          *(int *)(param_2 + 0x14) = iVar6 + 1;
        }
        if (*(char *)(param_2 + 0x28) == '\x01') {
          bVar2 = false;
          uVar5 = (uint)*(byte *)(param_2 + 0x29);
          uVar7 = true;
        }
        else {
          FUN_011ef738(&local_30,param_2 + 0x18);
          bVar2 = false;
          if ((local_30 & 0xff) == 5) {
            uVar7 = false;
          }
          else if ((local_30 & 0xff) == 4) {
            uVar5 = (uint)local_30._1_1_;
            uVar7 = true;
            *(byte *)(param_2 + 0x29) = local_30._1_1_;
            *(undefined1 *)(param_2 + 0x28) = 1;
          }
          else {
            local_38 = FUN_0157c4a0(local_30,local_2c);
            uVar7 = true;
            bVar2 = true;
          }
          if (bVar2) break;
        }
        if (!(bool)uVar7) break;
        uVar7 = true;
        if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) break;
        iVar4 = *(int *)(param_2 + 0xc);
        uVar7 = *(undefined1 *)(param_2 + 0x29);
        cVar1 = *(char *)(param_2 + 0x28);
        *(undefined1 *)(param_2 + 0x28) = 0;
      } while( true );
    }
  }
LAB_011bda58:
  *(undefined4 *)(param_1 + 4) = local_38;
  *(char *)(param_1 + 2) = (char)uVar5;
  *(undefined1 *)(param_1 + 1) = uVar7;
  *(bool *)param_1 = bVar2;
  return;
}

