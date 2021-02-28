/*
 Navicat Premium Data Transfer

 Source Server         : localMySQL
 Source Server Type    : MySQL
 Source Server Version : 80020
 Source Host           : localhost:3306
 Source Schema         : online_pharmacy

 Target Server Type    : MySQL
 Target Server Version : 80020
 File Encoding         : 65001

 Date: 20/07/2020 22:01:26
*/

SET NAMES utf8;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for medicine
-- ----------------------------
DROP TABLE IF EXISTS `medicine`;
CREATE TABLE `medicine`  (
  `id` int(0) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci  NULL DEFAULT NULL,
  `price` decimal(10, 2) NULL DEFAULT NULL,
  `picture` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci  NULL DEFAULT NULL,
  `remark` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci  NULL DEFAULT NULL,
  `type_id` int(0) NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 30 CHARACTER SET = utf8 COLLATE = utf8_general_ci  ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of medicine
-- ----------------------------
INSERT INTO `medicine` VALUES (1, '连花清瘟胶囊', 22.00, 'images/1/1.jpg', '由连翘、金银花、炙麻黄、炒苦杏仁、石膏、板蓝根、绵马贯众、鱼腥草、广藿香、大黄、红景天、薄荷脑、甘草组成。具有清瘟解毒，宣肺泄热的功效。用于治疗流行性感冒属热毒袭肺证，症见发热或高热，恶寒，肌肉酸痛，鼻塞流涕，咳嗽，头痛，咽干咽痛，舌偏红，苔黄或黄腻等。', 1);
INSERT INTO `medicine` VALUES (2, '京都念慈庵枇杷膏', 56.80, 'images/1/2.jpg', '京都念慈庵蜜炼川贝枇杷膏的主要组成有川贝，枇杷叶，南沙参，橘红，远志，款冬花，桔梗，薄荷脑等药物，它的功效是润肺生津，化痰止咳，平喘。主要是用来治疗肺虚引起的咳嗽等疾病。它的适应症是咳嗽，咳痰，痰多黏稠不易咳，舌质红，苔黄腻，脉滑等症状。', 1);
INSERT INTO `medicine` VALUES (3, '999感冒灵', 15.00, 'images/1/3.jpg', '本品为浅棕色至深棕色的颗粒，味甜、微苦。每盒含9包，每包袋装10g[1]。解热镇痛功效，用于因感冒引起的头痛，发热，鼻塞，流涕，咽痛等症状。其成分是三叉苦、岗梅、金盏银盘、薄荷油、野菊花、马来酸氯苯那敏、咖啡因、对乙酰氨基酚。辅料为蔗糖粉。', 1);
INSERT INTO `medicine` VALUES (4, '复方氨酚烷胺片', 39.00, 'images/1/4.jpg', '复方氨酚烷胺片，西药名。为解热镇痛药。用于缓解普通感冒及流行性感冒引起的发热、头痛、四肢酸痛、打喷嚏、流鼻涕、鼻塞、咽痛等症状。本品为复方制剂，其组分为对乙酰氨基酚、盐酸金刚烷胺、人工牛黄、咖啡因、马来酸氯苯那敏。', 1);
INSERT INTO `medicine` VALUES (5, '双黄连口服液', 83.00, 'images/1/5.jpg', '双黄连口服液，中成药名。由金银花、黄芩、连翘组成。具有疏风解表，清热解毒的功效。用于外感风热所致的感冒，症见发热、咳嗽、咽痛。本品为棕红色的澄清液体；味甜，微苦〔规格(1)、规格(2)〕；或为深棕色的澄清液体；味苦、微甜〔规格(3)〕。', 1);
INSERT INTO `medicine` VALUES (6, '完美芦荟胶', 55.00, 'images/2/6.jpg', '完美芦荟胶可防止皮肤粗糙，舒缓皮肤不适症状，从而保持健康皮肤，还可以完美芦荟胶可以强化细胞活力，这是因为完美芦荟胶中含有的异柠檬酸钙等成份能够扩张毛细血管，从而促进皮肤微循环，完美芦荟胶还具有镇静舒缓、消炎杀菌、复活细胞的作用。', 2);
INSERT INTO `medicine` VALUES (7, '皇后牌珍珠霜', 40.00, 'images/2/7.jpg', '珍珠霜具有滋润补充肌夫水分，增加皮肤深层细胞营养，使肌肤保持青春，健康，自然美白。\r\n珍珠霜能激活细胞，使老化，粗糙的皮肤得到修复，达到使肌肤柔细润滑，白里透红的效果，从而焕发青春活力，让人年轻美丽。\r\n', 2);
INSERT INTO `medicine` VALUES (8, '皇后牌珍珠膏', 98.00, 'images/2/8.jpg', '片仔癀珍珠膏有滋养、护肤活性成分，促进肌肤新陈代谢，增强皮肤细胞活力和皮肤弹性，保湿、柔润肌肤。具有除痘去斑的作用，对面部青春痘、色斑、皮肤瑕疵、皲裂尤为适合，并能减少高温、低温、风沙等恶劣环境对皮肤的伤害，令肌肤白皙红润、娇嫩可人。', 2);
INSERT INTO `medicine` VALUES (9, 'freeplus', 179.00, 'images/2/9.jpg', '打出的泡沫细腻浓密，带有淡淡的香味，补水效果很好，植物萃取为主，不会过敏的产品，有洋甘菊味道，吸收很快，滋养保湿，紧致细腻，适用于任何肤质，能够深入肌肤。', 2);
INSERT INTO `medicine` VALUES (10, '大宝', 129.50, 'images/2/10.jpg', '大宝护肤品的作用有浸润保湿、补水防老、抗氧化等，在清洁完肌肤后，能舒缓肌肤，惊人效果，让你轻松重回童颜肌。大宝护肤品的作用在于，给予肌肤深度滋润和持久保湿，清洁完肌肤以后，肌肤都需要及时的补水浸润，将大宝护肤品涂抹在肌肤上，也是让肌肤形成一层保护膜，晚上涂抹后，第二天看起来也会光彩可人。', 2);
INSERT INTO `medicine` VALUES (11, '六味地黄丸', 30.00, 'images/5/11.jpg', '六味地黄丸，中成药名。由熟地黄、酒萸肉、山药、牡丹皮、茯苓、泽泻组成。具有滋阴补肾的功效。用于肾阴亏损，头晕耳鸣，腰膝酸软，骨蒸潮热，盗汗遗精。', 5);
INSERT INTO `medicine` VALUES (12, '五子衍宗丸', 36.10, 'images/5/12.jpg', '五子衍宗丸，中成药名。由枸杞子、菟丝子(炒)、覆盆子、五味子(蒸)、车前子(盐炒)组成。具有补肾益精的功效。用于肾虚精亏所致的阳痿不育、遗精早泄、腰痛、尿后余沥。本品为棕褐色的水蜜丸、棕黑色的小蜜丸或大蜜丸；味甜、酸，微苦。', 5);
INSERT INTO `medicine` VALUES (13, '肾宝片', 292.00, 'images/5/13.jpg', '肾宝片，中成药名。由淫羊藿、葫芦巴、金樱子、熟地黄、补骨脂、蛇床子、制何首乌、肉苁蓉、枸杞子、菟丝子、五味子、覆盆子等22味药组成。具有调和阴阳，温阳补肾，扶正固本的功效。用于腰腿酸痛，精神不振，夜尿频多，畏寒怕冷；妇女白带清稀。', 5);
INSERT INTO `medicine` VALUES (14, '还少胶囊', 75.00, 'images/5/14.jpg', '还少胶囊，中成药名。由熟地黄、山药(炒)、牛膝、枸杞子、山茱萸等组成。具有温肾补脾，养血益精的功效。用于脾肾虚损，腰膝酸痛，阳萎遗精，耳鸣目眩，精血亏耗，肌体瘦弱，食欲减退，牙根酸痛。', 5);
INSERT INTO `medicine` VALUES (15, '壮腰补肾丸', 17.80, 'images/5/15.jpg', '壮腰补肾丸，中成药名。由熟地黄、山药、泽泻、茯苓、肉苁蓉(制)、红参、麦冬、菟丝子(炒)、车前子(炒)、菊花、远志(制)、白术(炒)、龙骨(煅)、牡蛎(煅)、续断、当归、黄芪、首乌藤、滕合欢、五味子(制)组成。具有壮腰补肾，益气养血的功效。用于心悸少寐，健忘怔忡，腰膝酸痛，肢体羸弱。', 5);
INSERT INTO `medicine` VALUES (16, '红核妇洁洗液', 28.00, 'images/6/16.jpg', '红核妇洁洗液，中成药名。由山楂核干馏液组成。具有解毒祛湿，杀虫止痒的功效。用于湿毒下注之阴痒、带下；霉菌性阴道炎和非特异性阴道炎见上述证候者。', 6);
INSERT INTO `medicine` VALUES (17, '杰士邦', 24.50, 'images/6/17.jpg', '杰士邦生产基地设在泰国南部的天然橡胶种植园边，这里不仅有世界上最天然胶乳，而且大大缩短了生产地和原料产地间的距离。因此，杰士邦产品原料从割胶到上机生产，最短只需3天多，几乎不经过储藏程序（普通安全套产品的储运过程需至少1到2月左右），无须添加阻燃剂等任何防止胶乳老化的化学添加剂，高效的加工流程造就的产品自然更加柔软。杰士邦产品的套壁达到创纪录的0.05毫米，薄于大多数同类产品。这得益于其严格保密的胶乳配方，这种先进的独特配方保证杰士邦做到套壁更薄的同时韧性更强，不会出现意外撕裂的情况。', 6);
INSERT INTO `medicine` VALUES (18, '幸福的0.01', 158.00, 'images/6/18.jpg', '幸福的0.01厘米世界最薄安全套采用聚氨酯为材料，没有传统橡胶的刺鼻气味，而且韧性也优于传统橡胶安全套，强度达到普通安全套的3倍以上，虽然薄，但更加安全。', 6);
INSERT INTO `medicine` VALUES (19, '洁尔阴洗液', 29.80, 'images/6/19.jpg', '洁尔阴洗液，中成药名。由蛇床子、艾叶、独活、石菖蒲、苍术、薄荷、黄柏、黄芩、苦参、地肤子、茵陈、土荆皮、栀子、山银花组成。具有清热燥湿，杀虫止痒的功效。主治妇女湿热带下。症见阴部瘙痒红肿，带下量多，色黄或如豆渣状，口苦口干，尿黄便结。适用于霉菌性、滴虫性阴道炎见上述症状者。也用于下述皮肤病：湿疹(湿热型)、接触性皮炎(热毒夹湿型)、体股癣(风湿热型)。', 6);
INSERT INTO `medicine` VALUES (20, '加味逍遥丸', 106.00, 'images/6/20.jpg', '加味逍遥丸，中成药名。由柴胡、当归、白芍、白术(麸炒)、茯苓、甘草、牡丹皮、梔子(姜炙)、薄荷组成。具有舒肝清热，健脾养血的功效。用于肝郁血虚，肝脾不和，两胁胀痛，头晕目眩，倦怠食少，月经不调，脐腹胀痛。', 6);
INSERT INTO `medicine` VALUES (21, '健胃消食片', 42.00, 'images/3/21.jpg', '健胃消食片，中成药名。由太子参、陈皮、山药、炒麦芽、山楂组成。具有健胃消食的作用。用于脾胃虚弱所致的食积，症见不思饮食、嗳腐酸臭、脘腹胀满；消化不良见上述证候者。', 3);
INSERT INTO `medicine` VALUES (22, '乳酸菌素片', 33.00, 'images/3/22.jpg', '本品在肠道内形成保护层，阻止病原菌、病毒的侵袭；刺激肠道分泌抗体，提高肠道免疫力；选择性杀死肠道致病菌，保护促进有益菌的生长；调节肠黏膜电解质、水分平衡；促进胃液分泌，增强消化功能。', 3);
INSERT INTO `medicine` VALUES (23, '草木樨流侵液片', 47.00, 'images/3/23.jpg', '草木犀流浸液片，西药名。用于治疗因创伤、外科手术等引起的软组织损伤肿胀。治疗各期内痔、混合痔、炎性外痔、血栓性外痔等各种类型痔引起的出血、脱出、疼痛、肿胀、瘙痒等。也可用于痔手术后肿胀、疼痛的治疗。', 3);
INSERT INTO `medicine` VALUES (24, '丹参保心茶', 525.00, 'images/3/24.jpg', '丹参保心茶，中成药名。由丹参、绿茶组成。具有活血化瘀的功效。用于心血瘀阻型胸痹的辅助治疗，可缓解胸闷、心痛、心悸。', 3);
INSERT INTO `medicine` VALUES (25, 'lifespace', 159.00, 'images/3/25.jpg', '澳洲Life Space益生菌有婴幼儿专用益生菌、儿童专用益生菌、成人专用益生菌、孕妇专用益生菌多种，其主要成分是活性益生菌。在活性益生菌中双歧杆菌能够消除肠胃道内的腐败物质如：有害菌、没有消化的纤维、多余的糖分等，从而维持肠道内的健康，改善便秘；植物乳杆菌、鼠李糖杆菌等对有害菌均有一定抑制作用，从而帮助调节免疫力。', 3);
INSERT INTO `medicine` VALUES (26, '消痛贴膏', 180.00, 'images/4/26.jpg', '消痛贴膏，中成药名。由独一味、姜黄等药味组成。具有活血化瘀，消肿止痛的功效。用于急慢性扭挫伤、跌打瘀痛、骨质增生、风湿及类风湿疼痛、落枕、肩周炎、腰肌劳损和陈旧性伤痛。', 4);
INSERT INTO `medicine` VALUES (27, '薏辛除湿止痛胶囊', 428.00, 'images/4/27.jpg', '薏辛除湿止痛胶囊，中成药名。由当归、白芍、白术、薏苡仁、附子(制)、桂枝、乌梢蛇、地龙、牛膝、细辛、甘草组成。具有散寒除湿，活血止痛的功效。用于痹症寒湿闭阻，瘀血阻滞引起的关节疼痛，关节肿胀等症的辅助治疗。', 4);
INSERT INTO `medicine` VALUES (28, ' 百多邦', 25.00, 'images/4/28.jpg', '百多邦软膏是一种抗生素软膏，主要用于杀死皮肤表面革兰氏阳性球菌。对耐药性金黄色葡萄球菌也有效，对某些革兰氏阴性菌具有一定的抗菌作用。在临床上，它主要用于治疗细菌性感染性皮肤病，例如脓疱，毛囊炎，fur，甲沟炎，化脓性汗腺炎，蜂窝织炎等。', 4);
INSERT INTO `medicine` VALUES (29, '天和追风膏', 199.00, 'images/4/29.jpg', '天和追风膏，中成药名。由生草乌、麻黄、细辛、羌活、乌药、白芷、高良姜、独活、威灵仙、生川乌、肉桂、红花、桃仁、苏木、赤芍等34味药组成。具有温经散寒，祛风除湿，活血止痛的作用。用于风寒湿闭阻、瘀血阻络所致的痹病，症见关节疼痛，局部畏风寒，腰背痛，屈伸不利，四肢麻木。', 4);
INSERT INTO `medicine` VALUES (30, '穿龙刺骨片', 47.50, 'images/4/30.jpg', '穿龙骨刺片，中成药名。由穿山龙、淫羊藿、狗脊、川牛膝、熟地黄、枸杞子组成。具有补肾健骨，活血止痛的功效。用于肾虚血瘀所致的骨性关节炎，症见关节疼痛。', 4);

-- ----------------------------
-- Table structure for medicinetype
-- ----------------------------
DROP TABLE IF EXISTS `medicinetype`;
CREATE TABLE `medicinetype`  (
  `id` int(0) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci  NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 6 CHARACTER SET = utf8 COLLATE = utf8_general_ci  ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of medicinetype
-- ----------------------------
INSERT INTO `medicinetype` VALUES (1, '感冒发烧');
INSERT INTO `medicinetype` VALUES (2, '专业护肤');
INSERT INTO `medicinetype` VALUES (3, '肠胃用药');
INSERT INTO `medicinetype` VALUES (4, '健康药品');
INSERT INTO `medicinetype` VALUES (5, '男性健康');
INSERT INTO `medicinetype` VALUES (6, '女性健康');

-- ----------------------------
-- Table structure for orderdetail
-- ----------------------------
DROP TABLE IF EXISTS `orderdetail`;
CREATE TABLE `orderdetail`  (
  `id` int(0) NOT NULL AUTO_INCREMENT,
  `oid` int(0) NULL DEFAULT NULL,
  `mid` int(0) NULL DEFAULT NULL,
  `number` int(0) NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8 COLLATE = utf8_general_ci  ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of orderdetail
-- ----------------------------
INSERT INTO `orderdetail` VALUES (20, 20, 1, 1);
INSERT INTO `orderdetail` VALUES (21, 21, 1, 1);
INSERT INTO `orderdetail` VALUES (22, 22, 1, 4);
INSERT INTO `orderdetail` VALUES (23, 22, 2, 2);
INSERT INTO `orderdetail` VALUES (24, 23, 1, 5);
INSERT INTO `orderdetail` VALUES (25, 23, 2, 1);

-- ----------------------------
-- Table structure for orders
-- ----------------------------
DROP TABLE IF EXISTS `orders`;
CREATE TABLE `orders`  (
  `id` int(0) NOT NULL AUTO_INCREMENT,
  `oid` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `uid` int(0) NULL DEFAULT NULL,
  `price` decimal(10, 0) NULL DEFAULT NULL COMMENT '总价',
  `otime` datetime(6) NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 17 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of orders
-- ----------------------------
INSERT INTO `orders` VALUES (20, '202007202126663442', 1, 22, '2020-07-20 09:26:55.000000');
INSERT INTO `orders` VALUES (21, '202007202128624514', 1, 22, '2020-07-20 09:28:27.000000');
INSERT INTO `orders` VALUES (22, '202007202128385132', 1, 202, '2020-07-20 09:28:54.000000');
INSERT INTO `orders` VALUES (23, '202007202129713531', 1, 167, '2020-07-20 09:29:19.000000');

-- ----------------------------
-- Table structure for user
-- ----------------------------
DROP TABLE IF EXISTS `user`;
CREATE TABLE `user`  (
  `id` int(0) NOT NULL AUTO_INCREMENT,
  `username` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci  NULL DEFAULT NULL,
  `password` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci  NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 2 CHARACTER SET = utf8 COLLATE = utf8_general_ci  ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of user
-- ----------------------------
INSERT INTO `user` VALUES (1, 'zd', '123');
INSERT INTO `user` VALUES (2, '邹登', '123');
INSERT INTO `user` VALUES (3, '徐涛', '123');
INSERT INTO `user` VALUES (4, '杨稳', '123');

SET FOREIGN_KEY_CHECKS = 1;
