// FUN_0134c468 @ 0134c468 size=1680 calls_out=2 calls_in=2
// strings: 

void FUN_0134c468(undefined2 *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined4 unaff_r7;
  undefined **unaff_r8;
  char *unaff_r9;
  undefined4 unaff_r10;
  undefined **in_r12;
  undefined4 unaff_lr;
  undefined2 local_38;
  undefined1 local_36;
  undefined **ppuStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 local_23;
  undefined1 local_21;
  
  if (param_3 == 0) {
LAB_0134c5ec:
    *(undefined1 *)(param_1 + 0x10) = 8;
    *(undefined1 *)param_1 = 5;
    return;
  }
  if (0x3d < param_3) {
    if (param_3 - 0x3e < param_2[3]) {
      uVar2 = param_2[2] + (param_3 - 0x3e);
      uVar3 = uVar2 - *param_2;
      if (uVar2 < *param_2) {
        uVar3 = uVar2;
      }
      FUN_01390f7c(param_1,param_2[1] + uVar3 * 0x24);
      return;
    }
    goto LAB_0134c5ec;
  }
  iVar1 = param_3 - 1;
  uVar5 = 7;
  uVar4 = 200;
  switch(param_3) {
  case 1:
    uVar5 = 2;
    unaff_r9 = (char *)0x1;
    unaff_r8 = (undefined **)0x0;
    uVar4 = 0xc0dc;
    unaff_r10 = 0;
    param_3 = 0x1ce;
    goto switchD_0134c498_caseD_8;
  case 2:
    unaff_r8 = (undefined **)0x1010101;
    param_3 = 0x101;
    unaff_r10 = 0x1010101;
    unaff_r9 = (char *)0x1010101;
    uVar4 = 0x101;
    goto LAB_0134c8c0;
  case 3:
    unaff_r8 = (undefined **)0x2020202;
    param_3 = 0x202;
    unaff_r10 = 0x2020202;
    unaff_r9 = (char *)0x2020202;
    uVar4 = 0x202;
LAB_0134c8c0:
    uVar5 = 3;
    in_r12 = unaff_r8;
    goto switchD_0134c498_caseD_8;
  case 4:
    uVar5 = 5;
    unaff_r10 = 1;
    unaff_r9 = &DAT_005327c4;
    goto LAB_0134c95c;
  case 5:
    uVar5 = 5;
    unaff_r10 = 0xb;
    unaff_r9 = 
    "/index.htmlcannot resolve index:authority:method:scheme:path:protocol:statusevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/client.rs:1274"
    ;
    goto LAB_0134c95c;
  case 6:
    unaff_r10 = 4;
    unaff_r8 = (undefined **)0x0;
    uVar4 = 0xc0dc;
    uVar5 = 4;
    unaff_r9 = "http|";
    param_3 = 0x1ce;
    goto switchD_0134c498_caseD_8;
  case 7:
    uVar5 = 4;
    unaff_r10 = 5;
    unaff_r9 = &DAT_0053278b;
LAB_0134c95c:
    uVar4 = 0xc0dc;
    param_3 = 0x1ce;
    unaff_r8 = (undefined **)0x0;
  case 8:
    goto switchD_0134c498_caseD_8;
  case 9:
    uVar4 = 0xcc;
    goto switchD_0134c498_caseD_8;
  case 10:
    uVar4 = 0xce;
    goto switchD_0134c498_caseD_8;
  case 0xb:
    uVar4 = 0x130;
    goto switchD_0134c498_caseD_8;
  case 0xc:
    uVar4 = 400;
    goto switchD_0134c498_caseD_8;
  case 0xd:
    uVar4 = 0x194;
    goto switchD_0134c498_caseD_8;
  case 0xe:
    uVar4 = 500;
    goto switchD_0134c498_caseD_8;
  case 0xf:
    unaff_r8 = (undefined **)0x0;
    unaff_r9 = (char *)0x1;
    unaff_r10 = 0;
    in_r12 = &PTR_FUN_01ce7108;
    param_3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    unaff_r7 = 0;
    iVar1 = 0;
    unaff_lr = 1;
    goto switchD_0134c498_caseD_8;
  case 0x10:
    FUN_01353668(&ppuStack_34);
    unaff_r8 = (undefined **)0x0;
    unaff_r9 = (char *)0x2;
    unaff_r10 = 0;
    uVar4 = 0;
    local_36 = local_21;
    param_3 = 0;
    local_38 = local_23;
    iVar1 = local_2c;
    unaff_r7 = local_28;
    in_r12 = ppuStack_34;
    unaff_lr = uStack_30;
    uVar5 = local_24;
    goto switchD_0134c498_caseD_8;
  case 0x11:
    unaff_r9 = (char *)0x3;
    break;
  case 0x12:
    unaff_r9 = (char *)0x4;
    break;
  case 0x13:
    unaff_r9 = (char *)0x0;
    break;
  case 0x14:
    unaff_r9 = (char *)0x8;
    break;
  case 0x15:
    unaff_r9 = (char *)0xd;
    break;
  case 0x16:
    unaff_r9 = (char *)0xe;
    break;
  case 0x17:
    unaff_r9 = (char *)0x10;
    break;
  case 0x18:
    unaff_r9 = (char *)0x11;
    break;
  case 0x19:
    unaff_r9 = (char *)0x15;
    break;
  case 0x1a:
    unaff_r9 = (char *)0x16;
    break;
  case 0x1b:
    unaff_r9 = (char *)0x17;
    break;
  case 0x1c:
    unaff_r9 = (char *)0x18;
    break;
  case 0x1d:
    unaff_r9 = (char *)0x19;
    break;
  case 0x1e:
    unaff_r9 = (char *)0x1a;
    break;
  case 0x1f:
    unaff_r9 = (char *)0x1d;
    break;
  case 0x20:
    unaff_r9 = (char *)0x1e;
    break;
  case 0x21:
    unaff_r9 = (char *)0x20;
    break;
  case 0x22:
    unaff_r9 = (char *)0x21;
    break;
  case 0x23:
    unaff_r9 = (char *)0x22;
    break;
  case 0x24:
    unaff_r9 = (char *)0x23;
    break;
  case 0x25:
    unaff_r9 = (char *)0x25;
    break;
  case 0x26:
    unaff_r9 = (char *)0x26;
    break;
  case 0x27:
    unaff_r9 = (char *)0x27;
    break;
  case 0x28:
    unaff_r9 = (char *)0x28;
    break;
  case 0x29:
    unaff_r9 = (char *)0x29;
    break;
  case 0x2a:
    unaff_r9 = (char *)0x2a;
    break;
  case 0x2b:
    unaff_r9 = (char *)0x2b;
    break;
  case 0x2c:
    unaff_r9 = (char *)0x2c;
    break;
  case 0x2d:
    unaff_r9 = (char *)0x2d;
    break;
  case 0x2e:
    unaff_r9 = (char *)0x2e;
    break;
  case 0x2f:
    unaff_r9 = (char *)0x2f;
    break;
  case 0x30:
    unaff_r9 = (char *)0x32;
    break;
  case 0x31:
    unaff_r9 = (char *)0x33;
    break;
  case 0x32:
    unaff_r9 = (char *)0x36;
    break;
  case 0x33:
    unaff_r9 = (char *)0x37;
    break;
  case 0x34:
    unaff_r9 = (char *)0x39;
    break;
  case 0x35:
    unaff_r9 = (char *)0x3a;
    break;
  case 0x36:
    unaff_r9 = (char *)0x40;
    break;
  case 0x37:
    unaff_r9 = (char *)0x41;
    break;
  case 0x38:
    unaff_r9 = (char *)0x42;
    break;
  case 0x39:
    unaff_r9 = (char *)0x45;
    break;
  case 0x3a:
    unaff_r9 = (char *)0x46;
    break;
  case 0x3b:
    unaff_r9 = (char *)0x49;
    break;
  case 0x3c:
    unaff_r9 = (char *)0x4a;
    break;
  case 0x3d:
    unaff_r9 = (char *)0x4c;
  }
  in_r12 = &PTR_FUN_01ce7108;
  unaff_lr = 1;
  unaff_r10 = 0;
  unaff_r8 = (undefined **)0x0;
  param_3 = 0;
  uVar4 = 0;
  unaff_r7 = 0;
  iVar1 = 0;
  uVar5 = 0;
switchD_0134c498_caseD_8:
  *(undefined1 *)(param_1 + 0x10) = uVar5;
  *(char **)(param_1 + 2) = unaff_r9;
  *(undefined4 *)(param_1 + 4) = unaff_r10;
  *(undefined ***)(param_1 + 6) = unaff_r8;
  *(undefined ***)(param_1 + 8) = in_r12;
  *(undefined4 *)(param_1 + 10) = unaff_lr;
  *(int *)(param_1 + 0xc) = iVar1;
  *(undefined4 *)(param_1 + 0xe) = unaff_r7;
  param_1[1] = (short)param_3;
  *param_1 = uVar4;
  *(undefined2 *)((int)param_1 + 0x21) = local_38;
  *(undefined1 *)((int)param_1 + 0x23) = local_36;
  return;
}

