// FUN_018edacc @ 018edacc size=876 calls_out=9 calls_in=1
// strings: ServerNameType

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018edacc(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 unaff_r10;
  undefined8 uVar8;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  FUN_01930f74(&local_38,&DAT_01d233f0,param_2);
  if ((char)local_38 == '\x18') {
    uVar8 = FUN_0192fac8(param_2,local_34);
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
      *param_1 = 1;
      param_1[1] = 0xb;
      param_1[2] = iVar4;
      param_1[3] = 0;
    }
    else {
      local_58 = 0;
      local_48 = 0;
      if (iVar4 == 0) {
        local_54 = 0x80000003;
      }
      else {
        local_54 = 0x80000003;
        do {
          local_50 = uVar8;
          uVar8 = FUN_0192fac8(&local_50,1);
          if (((char *)uVar8 == (char *)0x0) || ((int)((ulonglong)uVar8 >> 0x20) != 1)) {
            *(undefined1 *)((int)param_1 + 6) = 0;
            *(undefined1 *)((int)param_1 + 5) = unaff_r10;
            *(undefined1 *)(param_1 + 1) = 0xc;
            param_1[2] = "ServerNameType";
            param_1[3] = 0xe;
LAB_018eddac:
            *param_1 = 1;
            if (local_54 == 0x80000003) {
              return;
            }
LAB_018ede00:
            uVar5 = local_54;
            if (local_54 < 0x80000001) {
              uVar5 = 0;
            }
            if (local_54 == 0x80000000) {
              return;
            }
            if ((uVar5 & 0x7fffffff) == 0) {
              FUN_0134bd64(local_54,local_5c);
              return;
            }
            return;
          }
          if (*(char *)uVar8 != '\0') {
            if (local_50._4_4_ < local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(local_48,local_50._4_4_,local_50._4_4_,&DAT_01d2562c);
            }
            break;
          }
          FUN_01935ea0(&local_38,&local_50);
          uVar6 = local_2c;
          uVar7 = local_30;
          uVar5 = local_34;
          if (local_38 != 0) {
            param_1[1] = local_34;
            param_1[2] = local_30;
            param_1[3] = local_2c;
            goto LAB_018eddac;
          }
          FUN_012fbd94(&local_44,local_30,local_2c);
          uVar3 = local_3c;
          uVar2 = local_40;
          if (local_44 == 1) {
            iVar4 = 2;
            bVar1 = 0;
          }
          else {
            iVar4 = FUN_01938820(local_40,local_3c);
            if (iVar4 == 0) {
              local_44 = 0x80000000;
              local_40 = uVar2;
              local_3c = uVar3;
              FUN_01938d70(&local_38,&local_44);
              uVar6 = local_30;
              uVar3 = local_34;
              uVar2 = local_38;
              FUN_0134bd64(uVar5,uVar7);
              iVar4 = 0;
              bVar1 = 1;
              uVar5 = uVar2;
              uVar7 = uVar3;
            }
            else {
              FUN_01938984(&local_38,uVar2,uVar3);
              bVar1 = 0;
              if ((local_38 & 0xff) == 2) {
                iVar4 = 2;
              }
              else {
                iVar4 = 1;
              }
            }
          }
          if (local_54 != 0x80000003) {
            *param_1 = 1;
            *(undefined1 *)(param_1 + 1) = 9;
            if (!(bool)(bVar1 & uVar5 == 0x80000000)) {
              FUN_0134bd64(uVar5,uVar7);
            }
            goto LAB_018ede00;
          }
          if (iVar4 == 0) {
            local_44 = uVar5;
            local_40 = uVar7;
            local_3c = uVar6;
            FUN_01938d70(&local_38,&local_44);
            local_54 = local_38;
            local_5c = local_34;
            local_58 = local_30;
            uVar8 = local_50;
            if (uVar5 != 0x80000000) {
              FUN_0134bd64(uVar5,uVar7);
              uVar8 = local_50;
            }
          }
          else {
            if (iVar4 == 1) {
              FUN_0134bd64(uVar5,uVar7);
              local_54 = 0x80000001;
            }
            else {
              FUN_0134bd64(uVar5,uVar7);
              local_54 = 0x80000002;
            }
            uVar8 = local_50;
          }
          local_50._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
          unaff_r10 = 0;
        } while (local_48 < local_50._4_4_);
      }
      if (local_54 == 0x80000003) {
        local_54 = 0x80000002;
      }
      *param_1 = 0;
      param_1[1] = local_54;
      param_1[2] = local_5c;
      param_1[3] = local_58;
    }
  }
  else {
    *(char *)(param_1 + 1) = (char)local_38;
    *(undefined1 *)((int)param_1 + 7) = local_38._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_38._1_2_;
    param_1[2] = local_34;
    param_1[3] = local_30;
    *param_1 = 1;
  }
  return;
}

