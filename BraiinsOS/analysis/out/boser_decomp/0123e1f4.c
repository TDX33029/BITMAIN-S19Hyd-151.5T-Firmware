// FUN_0123e1f4 @ 0123e1f4 size=512 calls_out=7 calls_in=2
// strings: 

void FUN_0123e1f4(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_30;
  int local_2c;
  uint local_28;
  uint uStack_24;
  undefined1 uStack_19;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < uVar3) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
      uVar6 = uVar5 - 9;
      if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 != 0x6e) goto LAB_0123e25c;
        *(uint *)(param_2 + 0x14) = uVar4 + 1;
        iVar1 = FUN_01964c70(param_2,"ull",3);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 2;
          param_1[1] = iVar1;
        }
        goto LAB_0123e3c8;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (uVar3 != uVar4);
  }
  else {
LAB_0123e25c:
    if (uVar4 < uVar3) {
      do {
        uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
        if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar5 == 0x2d) {
            *(uint *)(param_2 + 0x14) = uVar4 + 1;
            FUN_01964ce0(&local_30,param_2,0);
            if (!(local_30 != 3 || local_2c != 0)) goto LAB_0123e338;
            if (local_30 == 0) {
LAB_0123e390:
              uVar3 = 0xbf800000;
              if (uStack_24 < 0x80000000) {
                uVar3 = 0;
              }
              local_28 = (uint)ABS((float)(double)CONCAT44(uStack_24,local_28)) | uVar3 & 0x80000000
              ;
            }
            else {
              if (local_30 != 1) goto LAB_0123e3bc;
LAB_0123e388:
              local_28 = FUN_01bf0958();
            }
          }
          else {
            if (9 < uVar5 - 0x30) {
              uVar2 = FUN_019659c8(param_2,&uStack_19,&DAT_01c2496c);
              local_28 = FUN_01966f00(uVar2,param_2);
              goto LAB_0123e338;
            }
            FUN_01964ce0(&local_30,param_2,1);
            if (!(local_30 != 3 || local_2c != 0)) goto LAB_0123e338;
            if (local_30 != 2) {
              if (local_30 == 1) goto LAB_0123e388;
              goto LAB_0123e390;
            }
LAB_0123e3bc:
            local_28 = FUN_01bf0f18();
          }
          uVar2 = 1;
          goto LAB_0123e3c4;
        }
        uVar4 = uVar4 + 1;
        *(uint *)(param_2 + 0x14) = uVar4;
      } while (uVar3 != uVar4);
    }
  }
  local_30 = 5;
  local_28 = FUN_01964674(param_2,&local_30);
LAB_0123e338:
  uVar2 = 2;
LAB_0123e3c4:
  param_1[1] = local_28;
LAB_0123e3c8:
  *param_1 = uVar2;
  return;
}

