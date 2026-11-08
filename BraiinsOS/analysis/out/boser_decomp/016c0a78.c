// FUN_016c0a78 @ 016c0a78 size=372 calls_out=5 calls_in=1
// strings: 

void FUN_016c0a78(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  uint local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined4 local_1d4;
  uint local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = 4;
  do {
    if (iVar2 == 0xc) {
      iVar2 = param_2[1];
      if (iVar2 == 1) {
        local_208 = 0x80000000;
        local_204 = CONCAT31(local_204._1_3_,*(undefined1 *)*param_2);
      }
      else {
        FUN_016c7ccc(&local_208,*param_2,iVar2);
        if ((local_1d0 & 1) == 0) {
          if (local_1c8 == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = FUN_01298504(local_1c8,1);
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(1,local_1c8);
            }
          }
          FUN_01bed4e2(iVar3,local_1cc,local_1c8);
        }
        else {
          iVar3 = local_1cc;
        }
        local_78 = local_208;
        uStack_74 = local_204;
        uStack_70 = uStack_200;
        uStack_6c = uStack_1fc;
        uStack_68 = uStack_1f8;
        local_64 = local_1f4;
        uStack_60 = uStack_1f0;
        uStack_5c = uStack_1ec;
        uStack_58 = uStack_1e8;
        uStack_54 = uStack_1e4;
        puVar4 = (undefined4 *)((uint)&local_50 | 4);
        *puVar4 = local_208;
        puVar4[1] = local_204;
        puVar4[2] = uStack_200;
        puVar4[3] = uStack_1fc;
        puVar4[4] = uStack_1f8;
        puVar4[5] = local_1f4;
        puVar4[6] = uStack_1f0;
        puVar4[7] = uStack_1ec;
        puVar4[8] = uStack_1e8;
        puVar4[9] = uStack_1e4;
        local_208 = 0x80000003;
        puVar4 = (undefined4 *)((uint)&local_208 | 4);
        *puVar4 = local_50;
        puVar4[1] = uStack_4c;
        puVar4[2] = uStack_48;
        puVar4[3] = uStack_44;
        puVar4[4] = uStack_40;
        puVar4[5] = local_3c;
        puVar4[6] = uStack_38;
        puVar4[7] = uStack_34;
        puVar4[8] = uStack_30;
        puVar4[9] = uStack_2c;
        puVar4[10] = uStack_28;
        local_1c0 = local_1c8;
        local_1c8 = 1;
        local_1d4 = local_1dc;
        local_1d0 = local_1d8;
        local_1d8 = local_1e0;
        local_1c4 = iVar3;
      }
      FUN_016bdd60(param_1,&local_208,iVar2);
      return;
    }
    piVar1 = (int *)((int)param_2 + iVar2);
    iVar2 = iVar2 + 8;
  } while (*piVar1 != 0);
  *(undefined1 *)(param_1 + 0xc) = 2;
  return;
}

